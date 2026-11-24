#include <Wire.h>
#include <VL53L0X.h>   // Librería de Pololu
#include "sensores.h"
#include "config.h"

// Objeto del sensor GY-530 (VL53L0X)
static VL53L0X sensorDistancia;

/**
 * Función: iniciarSensor
 * Descripción: Configura el bus I2C e inicializa el VL53L0X en modo
 *              continuo (más rápido que pedir una medición cada vez).
 * Retorna: bool - true si el sensor respondió correctamente
 */
bool iniciarSensor() {
  Wire.begin(PIN_SDA, PIN_SCL);
  sensorDistancia.setTimeout(TIMEOUT_SENSOR_MS);

  if (!sensorDistancia.init()) {
    return false;
  }

  sensorDistancia.startContinuous();
  return true;
}

/**
 * Función: leerDistancia
 * Descripción: Lee la distancia medida por el VL53L0X.
 * Retorna: int - Distancia en milímetros, o -1 si hubo error de lectura
 */
int leerDistancia() {
  uint16_t distancia = sensorDistancia.readRangeContinuousMillimeters();

  // Si el sensor no respondió a tiempo, se informa error
  if (sensorDistancia.timeoutOccurred()) {
    return -1;
  }

  return (int)distancia;
}
