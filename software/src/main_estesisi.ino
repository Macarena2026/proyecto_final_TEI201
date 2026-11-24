/**
 * Proyecto: Detector de distancia con vibración
 * Placa: ESP32-S3 Super Mini (ESP32S3 Dev Module, USB CDC On Boot: Enabled)
 * Descripción: Mide la distancia con un VL53L0X y hace vibrar un motor
 *              con más fuerza mientras más cerca está el objeto.
 */

#include "config.h"
#include "sensores.h"
#include "actuadores.h"

void setup() {
  Serial.begin(BAUDRATE);
  delay(500);  // Espera a que el monitor serial se conecte

  iniciarMotor();

  if (!iniciarSensor()) {
    Serial.println("[ERROR] No se detectó el sensor VL53L0X. Revisa SDA/SCL y alimentación.");
    // Sin sensor no tiene sentido continuar
    while (true) {
      delay(1000);
    }
  }

  Serial.println("[INFO] Sistema iniciado correctamente");
}

void loop() {
  int distancia = leerDistancia();

  if (distancia < 0) {
    Serial.println("[ERROR] Timeout al leer el sensor");
  }

  int intensidad = calcularVibracion(distancia);
  setVibracion(intensidad);

#ifdef DEBUG
  Serial.print("[DEBUG] Distancia: ");
  Serial.print(distancia);
  Serial.print(" mm | PWM: ");
  Serial.println(intensidad);
#endif

  delay(INTERVALO_LECTURA_MS);
}
