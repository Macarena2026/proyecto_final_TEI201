# Fuentes del proyecto Vibra-Lens

Este archivo documenta el origen de los elementos externos o de terceros incorporados en el proyecto y las referencias técnicas utilizadas. Los puntos marcados con **(verificar)** dependen de datos que solo el equipo tiene o que conviene confirmar en la fuente antes de entregar.

## Código y proyecto de origen

| Elemento | Origen | Uso |
| --- | --- | --- |
| Firmware (`main.ino`, `config.h`, `sensores.h/.cpp`, `actuadores.h/.cpp`) | Desarrollo propio del equipo con asistencia de IA (Claude, Anthropic), revisado por el equipo | Código en src (ver sección 3 y Anexo) |
| Diagrama de flujo | Elaborado con asistencia de IA a partir de la lógica del firmware | Ver sección 3.2 (Figura 2) |
| Diagrama de solución, esquemático y planos | Elaboración propia del equipo | Ver secciones 2, 4 y 5 |

## Librerías de software

| Librería | Dónde se usa | Licencia | Sitio |
| --- | --- | --- | --- |
| Wire (Arduino Core ESP32) | Ver sección 3.3 | LGPL 2.1 | https://github.com/espressif/arduino-esp32 |
| VL53L0X (Pololu) | Ver sección 3.3 | MIT | https://github.com/pololu/vl53l0x-arduino |
| LEDC (Arduino Core ESP32) | Ver sección 3.3 | LGPL 2.1 | https://github.com/espressif/arduino-esp32 |

## Modelos 3D de terceros

Los archivos del Avance 3 (Diseño Avance 3.f3z y Diseño Avance 3.stl) incorporan modelos o volúmenes de componentes electrónicos y auxiliares descargados de terceros, que no fueron diseñados desde cero por el equipo: los modelos de referencia de la ESP32-S3 mini, el sensor GY-530 y el interruptor.

## Datos

| Dato | Origen |
| --- | --- |
| Personas con discapacidad visual en Chile y datos socioeconómicos | Fundación Luz (2025), ENDIDE 2022. Ver Bibliografía |
| Precios y características de Envision Glasses, Ally Solos, OrCam MyEye 3 Pro y eSight Go | Ver sección 2.2. |
| Precios de componentes | Ver BOM (sección 4 y Anexo) |
| Resultados del testing | Ver sección 6 |
| Especificaciones del VL53L0X, ESP32-S3 y 2N2222 | Datasheets de los fabricantes. |

## Herramientas

Se utilizó asistencia de IA (Claude, de Anthropic) para desarrollar el código del firmware, elaborar el diagrama de flujo y redactar y revisar secciones del informe. El equipo revisó y validó el contenido generado. Para el modelado 3D se utilizó Autodesk Fusion 360, y para el desarrollo del firmware, Arduino IDE.
