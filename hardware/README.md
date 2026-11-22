# Hardware - Documentación

## Contenido
Esta carpeta contiene toda la documentación técnica del hardware del proyecto.

### 📁 Carpetas

#### `esquemas/`
Diagramas de circuitos y esquemáticos del sistema

#### `bom/`
Bill of Materials (Lista de materiales con SKU, proveedores Afel/Mechatronic y costos) 

#### `fotos/`
Fotografías de alta resolución del prototipo ensamblado

---

## Instrucciones de Ensamble

### Componentes Principales
1. **Placa de desarrollo ESP32-S3 mini** - Microcontrolador principal encargado de leer el sensor y controlar la alerta.
2. **Sensor de distancia GY-530 (VL53L0X)** - Detección de obstáculos frontales ubicados en la zona superior (sobre el torso).
3. **Motor vibrador de moneda (3,3 V)** - Actuador háptico que alerta al usuario mediante vibración.
4. **Etapa de control y protección (Transistor NPN 2N2222, resistor 1 kΩ 1/4 W y diodo 1N4007)** - Conmuta la corriente del motor, protege el pin GPIO y actúa como diodo *flyback*.
5. **Sistema de alimentación (Batería LiPo plana 3,7 V de 500 mAh e interruptor deslizable de 3 patas)** - Alimentación portátil y control de encendido/apagado.

### Pasos de Ensamblaje
1. **Validación en protoboard:** Montar inicialmente los componentes en la protoboard con el set de cables (M-M y M-H) para comprobar el funcionamiento del circuito antes de soldar.
2. **Conexión del sensor VL53L0X:** Conectar `VIN` a `3,3 V`, `GND` a `GND`, `SDA` al pin `4` y `SCL` al pin `5` de la placa ESP32-S3 mini.
3. **Armado de la etapa del motor:** Conectar el pin `6` al resistor de `1 kΩ` y este a la Base (`B`) del transistor `2N2222`. Conectar el Emisor (`E`) a `GND`, y el Colector (`C`) al terminal negativo del motor y al ánodo del diodo `1N4007`. Unir el terminal positivo del motor y el cátodo del diodo a `3,3 V`.
4. **Conexión de la alimentación:** Conectar el polo negativo (`-`) de la batería LiPo a `B-` de la placa, y el polo positivo (`+`) pasando en serie por el interruptor deslizable hacia `B+`.
5. **Montaje definitivo:** Transferir y soldar la etapa de control en la placa de cobre perforada (cortada a la mitad) para reducir volumen e integrar el circuito en el marco de los lentes.

### Precauciones
- ⚠️ Verificar siempre la polaridad de la batería LiPo (`+` a `B+` a través del interruptor y `-` a `B-`) antes de encender el circuito para evitar dañar la placa.
- ⚠️ Respetar la orientación del diodo *flyback* `1N4007` (cátodo con franja hacia `3,3 V`) y la distribución de pines (`E`, `B`, `C`) del transistor `2N2222`.
- ⚠️ No conectar el motor vibrador directamente al pin `6` sin el resistor de `1 kΩ` ni el transistor, para evitar daños por sobrecorriente en el pin GPIO.
- ⚠️ Manipular la batería LiPo plana con precaución: no doblarla, perforarla ni acercar el cautín a su cuerpo durante la soldadura.

---

## Especificaciones Técnicas

**Alimentación:** [Voltaje y corriente]  
**Consumo:** [Watts/mA]  
**Dimensiones:** [mm x mm x mm]  
**Peso:** [gramos]

---

## Troubleshooting
| Problema | Posible Causa | Solución |
|----------|---------------|----------|
| El prototipo no enciende | Interruptor en apagado, batería descargada o falso contacto en `B+` / `B-` | Verificar posición del interruptor, carga de la batería LiPo y continuidad de los cables de alimentación. |
| El sensor VL53L0X no entrega lecturas | Cables I2C invertidos o falta de alimentación en `VIN` | Confirmar que `SDA` esté en pin `4`, `SCL` en pin `5`, `VIN` en `3,3 V` y `GND` en `GND`. |
| El motor no vibra al detectar un obstáculo | Transistor `2N2222` mal orientado, diodo `1N4007` invertido o conexión suelta en pin `6` | Revisar pines `E-B-C` del transistor, orientación del diodo y continuidad a través del resistor de `1 kΩ`. |
| Mediciones inestables en exteriores | Interferencia de luz solar directa sobre el sensor óptico `VL53L0X` | Probar en sombra o agregar una pequeña visera alrededor del lente del sensor. |
