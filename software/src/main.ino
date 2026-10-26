#include <Wire.h>
#include <VL53L0X.h>

// Sensor de distancia por bus I2C.
VL53L0X sensor;

// Pines definidos para el prototipo actual.
// Verificar que GPIO 6 esté disponible en el modelo exacto de ESP32 Mini.
const int SDA_PIN   = 4;
const int SCL_PIN   = 5;
const int MOTOR_PIN = 6;

// Umbrales de distancia en milímetros.
const int DIST_MAX = 1500;  // La vibración comienza a partir de esta distancia.
const int DIST_MIN = 500;   // A esta distancia o menos, la vibración es máxima.

// Ciclo de trabajo PWM de 8 bits: 0 = apagado; 255 = máximo.
const int PWM_MIN = 90;
const int PWM_MAX = 255;

void setup() {
  Serial.begin(115200);
  Wire.begin(SDA_PIN, SCL_PIN);

  // Inicializa el sensor y define un tiempo máximo de espera.
  sensor.setTimeout(500);
  if (!sensor.init()) {
    Serial.println("[ERROR] No se detecta el sensor. Revisa SDA/SCL y alimentacion.");
    while (true) {
      delay(10);  // Detiene el sistema si el sensor no se inicializa.
    }
  }

  // Ajustes de temporización para intentar ampliar el alcance.
  // El alcance real depende del sensor, la superficie y la iluminación.
  sensor.setSignalRateLimit(0.1);
  sensor.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
  sensor.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);
  sensor.setMeasurementTimingBudget(50000);
  sensor.startContinuous();

  // PWM con API de Arduino-ESP32 Core 3.x: pin, frecuencia, resolución.
  ledcAttach(MOTOR_PIN, 1000, 8);
  Serial.println("[INFO] Sistema de asistencia iniciado.");
}

void loop() {
  const uint16_t dist = sensor.readRangeContinuousMillimeters();
  int duty = 0;

  // En caso de timeout o distancia fuera del umbral, se apaga el motor.
  if (sensor.timeoutOccurred() || dist > DIST_MAX) {
    duty = 0;
  } else if (dist <= DIST_MIN) {
    // Obstáculo muy cercano: vibración máxima.
    duty = PWM_MAX;
  } else {
    // Entre 500 y 1500 mm, la intensidad aumenta al acercarse el obstáculo.
    duty = map(dist, DIST_MAX, DIST_MIN, PWM_MIN, PWM_MAX);
  }

  ledcWrite(MOTOR_PIN, duty);
  Serial.printf("Distancia: %u mm | PWM: %d\n", dist, duty);
}
