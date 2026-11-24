#include "actuadores.h"
#include "config.h"

/**
 * Función: iniciarMotor
 * Descripción: Configura el canal PWM del pin del motor y lo deja apagado.
 *              Usa la API del paquete esp32 3.x (ledcAttach).
 */
void iniciarMotor() {
  ledcAttach(PIN_MOTOR, PWM_FRECUENCIA_HZ, PWM_RESOLUCION_BITS);
  ledcWrite(PIN_MOTOR, 0);
}

/**
 * Función: calcularVibracion
 * Descripción: Convierte la distancia en intensidad de vibración.
 *              Más cerca = más fuerte. Fuera de rango o con error = apagado.
 *              Se parte de PWM_MINIMO porque con duty muy bajo el motor
 *              no tiene fuerza para arrancar.
 * Parámetros: distanciaMm - distancia en milímetros (-1 si hubo error)
 * Retorna: int - Intensidad PWM (0 o entre PWM_MINIMO y PWM_MAXIMO)
 */
int calcularVibracion(int distanciaMm) {
  // Error de lectura o objeto fuera del rango útil: sin vibración
  if (distanciaMm < 0 || distanciaMm > DISTANCIA_LEJOS_MM) {
    return 0;
  }

  // Limita para no pasar del máximo cuando el objeto está muy cerca
  int distancia = constrain(distanciaMm, DISTANCIA_CERCA_MM, DISTANCIA_LEJOS_MM);

  // 1500 mm -> PWM_MINIMO, 500 mm -> PWM_MAXIMO
  return map(distancia, DISTANCIA_LEJOS_MM, DISTANCIA_CERCA_MM, PWM_MINIMO, PWM_MAXIMO);
}

/**
 * Función: setVibracion
 * Descripción: Aplica la intensidad PWM al motor a través del transistor.
 * Parámetros: intensidad - valor de 0 (apagado) a 255 (máximo)
 */
void setVibracion(int intensidad) {
  ledcWrite(PIN_MOTOR, intensidad);
}
