# Bill of Materials (BOM)

## Formato del Archivo

El archivo BOM incluye las siguientes columnas para el control de componentes y costos del prototipo:

| Columna | Descripción | Ejemplo |
|---------|-------------|---------|
| Cant. | Número de unidades / paquetes | 1 |
| Componente | Nombre descriptivo | Placa de desarrollo ESP32-S3 mini |
| Especificación | Detalles técnicos y función | Microcontrolador |
| Código/SKU | Identificador único en tienda | SKU: 2967 |
| Proveedor | Tienda/distribuidor local | Afel, Mechatronic |
| Precio tienda | Costo total de compra del paquete (CLP) | $9.990 |
| Precio unitario | Costo real por unidad utilizada (CLP) | $9.990 |

---

## Archivos a Incluir
- `bom_completo.xlsx` - Lista completa de materiales editable
- `Archivo-BOM - Hoja 1.pdf`  - Versión PDF para visualización
- `datasheets/` - Carpeta con PDFs de especificaciones de componentes críticos 

---

## Presupuesto Total

**Costo Total de Compra en Tienda:** $36.850 CLP  
**Costo Unitario Real por Prototipo:** $29.626,33 CLP *(descontando unidades sobrantes de paquetes)*

### Desglose por Categoría
| Categoría | Compra en tienda (CLP) | Costo unitario (CLP) |
| :--- | :---: | :---: |
| **Microcontrolador** (ESP32-S3 mini) | $9.990 | $9.990 |
| **Sensores** (GY-530 / VL53L0X) | $6.490 | $6.490 |
| **Actuadores** (Motor vibrador de moneda 3,3 V) | $1.200 | $1.200 |
| **Etapa de control y protección** (2N2222, resistor 1 kΩ, diodo 1N4007) | $5.690 | $416,33 |
| **Sistema de alimentación y carga** (Batería LiPo 3,7 V 500 mAh, interruptor) | $8.290 | $8.290 |
| **Materiales de ensamblaje** (Protoboard, cables M-M/M-H, placa perforada) | $5.190 | $3.240 |
| **Total** | **$36.850** | **$29.626,33** |
