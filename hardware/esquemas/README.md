# Esquemas de Circuito

## Archivos Requeridos

### Diagrama Principal
- `Diagrama Circuitos 2.0 protoboard.jpg`  - Esquema de conexiones del prototipo versión 2.0.
  
---

## Nomenclatura de Archivos
- Usar nombres descriptivos y sin espacios (usar guion bajo `_`).
- Incluir versión:
- Fecha en formato: 

---

## Notas de Diseño
1. **Comunicación I2C con el sensor de distancia (`VL53L0X` / GY-530):**
   - El sensor se alimenta directamente desde la salida regulada de `3,3 V` y `GND` de la placa ESP32-S3 mini.
   - Las líneas de datos I2C se asignaron a los pines `GPIO 4` (`SDA`) y `GPIO 5` (`SCL`), manteniendo un cableado corto y ordenado para evitar ruido en la lectura de obstáculos sobre el torso.

2. **Etapa de conmutación y protección del motor vibrador:**
   - Para no exigir corriente directa al microcontrolador, el motor vibrador de moneda (`3,3 V`) se controla mediante un transistor NPN `2N2222` en configuración de interruptor (*low-side switch*).
   - El pin `GPIO 6` pasa por un resistor de `1 kΩ` (1/4 W) hacia la Base (`B`) del transistor para limitar la corriente y proteger el pin GPIO. El Emisor (`E`) va a `GND` y el Colector (`C`) cierra el circuito del motor hacia `3,3 V`.

3. **Protección contra picos inductivos (Diodo *flyback*):**
   - Se incorporó un diodo rectificador `1N4007` en paralelo con el motor vibrador (cátodo con franja hacia `3,3 V` y ánodo hacia el Colector `C` del transistor) para disipar picos de voltaje inverso al detenerse el motor y proteger el transistor y la placa.

4. **Alimentación portátil y corte físico:**
   - El sistema utiliza una batería LiPo plana de `3,7 V` y `500 mAh` conectada a los terminales `B-` y `B+` de la ESP32-S3 mini.
   - Se intercaló un interruptor deslizable de 3 patas en la línea positiva (`+`) de la batería para permitir el encendido y apagado físico del dispositivo sin desconectar cables.

5. **Escalamiento de protoboard a placa perforada:**
   - El circuito se validó primero en protoboard (versión 2.0) y posteriormente se transfirió la etapa de control del motor a una placa de cobre perforada cortada a la mitad para reducir volumen y peso al montarlo en los lentes.
