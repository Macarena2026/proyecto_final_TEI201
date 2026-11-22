# Guion de la presentación y de la demo

La presentación dura entre 8 y 10 minutos y deja 3 para preguntas. Este guion reparte el tiempo y define cómo mostrar en vivo la detección de obstáculos y la alerta háptica.

## Reparto del tiempo

| Láminas | Tema | Tiempo |
|---|---|---|
| 2 a 3 | Problema (obstáculos sobre el torso, ODS 3 y 10)y propuesta | 1.5 minutos |
| 4 a 7 | Software/datos, hardware (circuito y montaje) y diseño 3D | 2 minutos |
| 8 a 10 | Resultados, análisis de fallas y validación con usuarios | 2 minutos |
|  11 | Demo en vivo | 3 minutos |
|  12 | Conclusiones | 1 minuto |

## Demo en vivo

La demo debe detectar un obstáculo real sobre el torso, activar la alerta háptica y terminar interpretando el resultado.

1. Enciende los lentes con el interruptor deslizable y verifica que la ESP32-S3 mini esté leyendo el sensor `VL53L0X`.
2. Muestra el estado normal sin obstáculos al frente (motor vibrador apagado).
3. Acerca un obstáculo a la altura del torso/cabeza (simulando un objeto en forma de T) hasta cruzar el umbral de distancia.
4. Confirma que el motor vibrador se activa de inmediato y muestra la distancia registrada en el monitor/dashboard.
5. Retira el obstáculo y verifica que la vibración se detiene correctamente (sin falsas alarmas).
6. Interpreta el resultado en voz alta, por ejemplo: *"el sensor detectó el obstáculo a X cm y activó la alerta en Y segundos, dando margen suficiente para detenerse antes del impacto"*.


## Preguntas probables y cómo responderlas

| Pregunta | Idea de respuesta |
|---|---|
| ¿Por qué alerta por vibración y no por audio? | Porque las personas ciegas dependen de su audición para orientarse en la calle; la vibración avisa sin tapar el oído. |
| ¿Por qué eligieron el sensor `VL53L0X`? | Es láser (*Time-of-Flight*), muy compacto para unos lentes y preciso para detectar obstáculos frontales sobre el torso. |
| ¿Por qué agregaron un transistor `2N2222`, resistor `1 kΩ` y diodo `1N4007`? | Para no exigir corriente directa al pin GPIO 6 y proteger la ESP32-S3 mini contra sobrecorrientes y picos inductivos del motor. |
| ¿Cuánto cuesta y cómo se repara? | El costo unitario es de $29.626 CLP ($36.850 CLP en tienda). El 100 % de las piezas se compra en Chile y la placa está protegida. |
| ¿Qué falta o qué mejorarían a futuro? | Optimizar el peso, mejorar el desempeño bajo sol directo y ampliar las pruebas en vía pública. |

