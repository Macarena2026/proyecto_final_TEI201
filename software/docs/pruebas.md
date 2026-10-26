# Plan de pruebas del software

Registrar resultados reales en la columna “Resultado observado”; no marcar una prueba como aprobada sin ejecutarla en el prototipo. Hacer las pruebas con el dispositivo inmóvil y objetos seguros.

| ID | Prueba | Procedimiento | Resultado esperado | Resultado observado | Estado |
|---|---|---|---|---|---|
| SW-01 | Inicio normal | Encender con sensor conectado | Mensaje de inicio; sin error de inicialización | Pendiente | Pendiente |
| SW-02 | Sensor desconectado | Desconectar alimentación del sensor con el equipo apagado antes de volver a encender | Mensaje `[ERROR]` y el programa no continúa al lazo normal | Pendiente | Pendiente |
| SW-03 | Sin obstáculo en rango | Poner una superficie más allá de 1500 mm | PWM 0; motor apagado | Pendiente | Pendiente |
| SW-04 | Obstáculo cercano | Colocar superficie a 500 mm o menos | PWM 255 | Pendiente | Pendiente |
| SW-05 | Obstáculo intermedio | Probar a 750, 1000 y 1250 mm | PWM intermedio; mayor al acercarse | Pendiente | Pendiente |
| SW-06 | Monitor serial | Abrir a 115200 baudios | Lecturas en mm y valor PWM legibles | Pendiente | Pendiente |
| SW-07 | Respuesta del motor | Comparar vibración en puntos de distancia | Cambio perceptible de vibración acorde al PWM | Pendiente | Pendiente |
| SW-08 | Compatibilidad eléctrica | Verificar pinout de placa y circuito de manejo del motor | GPIO correcto y motor manejado por transistor/driver | Pendiente | Pendiente |

## Registro mínimo recomendado
Anotar modelo exacto de ESP32 Mini, modelo exacto del sensor, versiones de Arduino IDE/Core/librería, alimentación utilizada y condiciones de prueba. La distancia de referencia debe medirse con una regla o instrumento adecuado.
