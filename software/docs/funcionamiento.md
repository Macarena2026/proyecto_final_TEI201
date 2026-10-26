# Funcionamiento del firmware

## Parámetros
| Constante | Valor | Significado |
|---|---:|---|
| `SDA_PIN` | GPIO 4 | Datos I²C |
| `SCL_PIN` | GPIO 5 | Reloj I²C |
| `MOTOR_PIN` | GPIO 6 | Señal PWM para el circuito de control del motor; verificar compatibilidad de placa |
| `DIST_MAX` | 1500 mm | Sobre este umbral se apaga el motor |
| `DIST_MIN` | 500 mm | A esta distancia o menos, PWM máximo |
| `PWM_MIN` | 90/255 | Vibración mínima dentro del rango |
| `PWM_MAX` | 255/255 | Vibración máxima |
| Frecuencia PWM | 1000 Hz | Frecuencia de control |
| Resolución PWM | 8 bits | Valores entre 0 y 255 |

## Lógica de decisión
- Si la lectura excede 1500 mm o se produce timeout, PWM = 0.
- Si la distancia es de 500 mm o menos, PWM = 255.
- Entre 500 y 1500 mm, el PWM se interpola linealmente desde 90 hasta 255: a menor distancia, mayor intensidad de vibración.

La señal PWM representa el ciclo de trabajo enviado al circuito de control; no equivale directamente a una intensidad física calibrada del motor. La respuesta real depende del motor, transistor, alimentación y montaje.

## Limitaciones
- El alcance efectivo debe comprobarse experimentalmente; una configuración de largo alcance no garantiza medición fiable a 1,5 m en todas las condiciones.
- Superficies oscuras, brillantes, inclinadas o luz ambiental pueden afectar la lectura.
- El código detiene el sistema si el sensor no inicia; no incluye recuperación automática tras un fallo de inicialización.
- Este dispositivo es complementario y no debe presentarse como sustituto de ayudas de movilidad convencionales.
