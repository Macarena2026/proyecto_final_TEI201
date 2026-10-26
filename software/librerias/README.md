# Dependencias de software

## Librerías necesarias

| Librería | Uso | Instalación |
|---|---|---|
| `Wire.h` | Comunicación I²C con el sensor | Incluida en el entorno Arduino para ESP32 |
| `VL53L0X.h` | Inicialización y lectura del sensor compatible VL53L0X | Instalar una librería Arduino llamada **VL53L0X** desde el Library Manager y verificar que proporcione `VL53L0X.h` |
| Arduino-ESP32 Core 3.x | Funciones de placa y PWM (`ledcAttach`, `ledcWrite`) | Instalar el paquete de placas ESP32 desde Boards Manager |

## Compatibilidad
El código usa `ledcAttach(pin, frecuencia, resolución)`, API de Arduino-ESP32 Core 3.x. Con Core 2.x puede ser necesario adaptar el PWM.

El nombre `VL53L0X.h` es una dependencia concreta: no demuestra por sí solo cuál es el modelo físico instalado. Revisar la etiqueta/ficha del sensor y confirmar que sea VL53L0X. Un VL53L1X requiere una librería y llamadas distintas.

No se incluyen copias de las librerías de terceros en este repositorio; se instalan desde Arduino IDE. Anotar en la entrega la versión instalada si el equipo docente requiere versiones exactas.
