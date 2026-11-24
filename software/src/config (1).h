#ifndef CONFIG_H
#define CONFIG_H

// ===== Modo debug =====
// Descomentar para activar mensajes [DEBUG] en el monitor serial
// #define DEBUG true

// ===== Serial =====
const unsigned long BAUDRATE = 115200;

// ===== Pines (ESP32-S3 Super Mini) =====
const int PIN_SDA = 4;     // I2C datos -> sensor VL53L0X
const int PIN_SCL = 5;     // I2C reloj -> sensor VL53L0X
const int PIN_MOTOR = 6;   // PWM -> resistor 1k -> base del 2N2222

// ===== Sensor de distancia =====
const uint16_t TIMEOUT_SENSOR_MS = 500;   // tiempo máximo de espera del sensor
const int DISTANCIA_LEJOS_MM = 1500;      // desde aquí empieza a vibrar
const int DISTANCIA_CERCA_MM = 500;       // desde aquí vibra al máximo

// ===== Motor vibrador (PWM) =====
const uint32_t PWM_FRECUENCIA_HZ = 5000;  // frecuencia de la señal PWM
const uint8_t PWM_RESOLUCION_BITS = 8;    // resolución: 0 a 255
const int PWM_MINIMO = 90;                // duty mínimo para que el motor logre arrancar
const int PWM_MAXIMO = 255;               // vibración máxima

// ===== Ciclo principal =====
const unsigned long INTERVALO_LECTURA_MS = 50;

#endif
