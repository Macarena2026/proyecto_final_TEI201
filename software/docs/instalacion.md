# Instalación y carga

## Requisitos
- Arduino IDE 2.x.
- Paquete de placas Arduino-ESP32 Core 3.x.
- Librería compatible `VL53L0X` instalada desde Library Manager.
- Placa ESP32 Mini y cable USB de datos.

## Pasos
1. Confirmar el modelo exacto de la placa y revisar su pinout. No asumir que GPIO 6 es utilizable en todas las variantes.
2. Confirmar que el sensor físico sea VL53L0X. Si el modelo es distinto, adaptar el código y la librería antes de compilar.
3. En Arduino IDE, instalar el paquete ESP32 desde Boards Manager y seleccionar la placa específica que corresponda al módulo.
4. En Sketch → Include Library → Manage Libraries, buscar `VL53L0X` e instalar una librería que incluya `VL53L0X.h`.
5. Abrir `software/src/main.ino`.
6. Revisar `SDA_PIN`, `SCL_PIN` y `MOTOR_PIN` según el cableado real.
7. Conectar la placa, seleccionar el puerto correcto y compilar/subir.
8. Abrir el Monitor Serial a 115200 baudios.
9. Acercar lentamente un objeto no peligroso frente al sensor y comprobar que la distancia se actualiza y la vibración cambia.

## Si no compila
- `VL53L0X.h: No such file`: instalar la librería correcta.
- `ledcAttach was not declared`: comprobar la versión del paquete ESP32; el código está escrito para Arduino-ESP32 Core 3.x.
- No detecta sensor: revisar alimentación compatible, GND común, SDA/SCL y modelo del sensor.
- El motor no vibra: revisar el pin PWM y el circuito transistor/driver; no alimentar el motor directamente desde el GPIO.
