# Código fuente

## `main.ino`
Programa principal en C++ para Arduino-ESP32. Incluye la inicialización I²C del sensor de distancia, lectura continua, decisión según umbrales y control PWM del motor vibrador.

### Pines configurados
| Función | GPIO |
|---|---:|
| SDA del sensor | 4 |
| SCL del sensor | 5 |
| Motor (señal PWM al circuito de manejo) | 6 |

**Importante:** comprobar el pinout de la placa ESP32 Mini exacta. GPIO 6 no está disponible para uso general en algunas variantes ESP32. El motor no debe conectarse directamente a un GPIO si su corriente excede la capacidad del pin; usar el transistor/circuito de manejo del esquema.

### Salida serial
Configurar el monitor serial a 115200 baudios. El programa muestra distancia en milímetros y ciclo de trabajo PWM.
