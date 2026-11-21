# Diseño 3D — Prototipo de lentes inteligentes

## Qué es real y qué es inventado

El modelo CAD en Fusion 360 (`.f3d`) y las piezas exportadas en formato `.stl` para impresión 3D del encapsulado, el soporte de sujeción a la montura y la distribución de los componentes corresponden al prototipo diseñado para el curso. Si alguna vista, render o anotación es ilustrativa o preliminar, se indica explícitamente en la imagen o en su descripción. El archivo `.f3d` abre en Autodesk Fusion 360 e incluye los volúmenes y alojamientos del conjunto, y los archivos `.stl` se utilizan para la fabricación/impresión de las piezas.

## Requisito del gemelo 3D

El modelo incluye el encapsulado, los alojamientos/volúmenes de los componentes electrónicos y el acople a la montura para verificar holguras, ventilación y orientación del sensor, con sus correspondientes archivos `.stl` listos para impresión.

| Componente | Estado en el modelo |
| :--- | :--- |
| Carcasa / encapsulado principal y tapa | Modelada en Fusion 360 y exportada a `.stl` con bordes redondeados y alojamientos internos |
| Soporte de sujeción a la montura | Modelado como acople/pinza y exportado a `.stl` para fijar el dispositivo a los lentes |
| Microcontrolador ESP32-S3 mini | Incluido como volumen/componente de referencia en el interior del encapsulado |
| Sensor de movimiento GY-530 | Ubicado en el módulo/ventana frontal o inferior con línea de visión despejada |
| Motor vibrador de moneda (3.3 V) y cableado / conexión | Integrado en su alojamiento con canalización de cables y aberturas de ventilación |

## Carpetas

| Carpeta | Contenido |
| :--- | :--- |
| `fusion360/` (o raíz del repo) | Archivos del modelo CAD (`.f3d`) y mallas exportadas en `.stl` para impresión 3D |
| `renders/` (o raíz del repo) | Renders (`Render 1.png` a `Render 5.png`) y vistas anotadas del prototipo |
| `planos/` (o raíz del repo) | Plano técnico (`Plano encapsulado completo.pdf`) con vistas, cotas y cajetín |

## Especificaciones del encapsulado

| Dato | Valor |
| :--- | :--- |
| Software | Autodesk Fusion 360 |
| Formatos de modelo y fabricación | `.f3d` (CAD) y `.stl` (impresión 3D) |
| Unidades | Milímetros (`mm`) |
| Escala | 1:1 |
| Material | Filamento para impresión 3D (ajustar según pieza real) |
| Tolerancia | Ajustar según holgura de acople y cierre |

## Funcionalidad del encapsulado

- El encapsulado aloja el ESP32-S3 y el cableado interno manteniendo separaciones y holguras respecto a las paredes.
- Incorpora ranuras de ventilación para disipar el calor del módulo y el motor vibrador.
- Deja accesible el puerto de conexión/carga (USB-C) sin interferir con el montaje en los lentes.
- Posiciona el sensor VL53L0X en su alojamiento para evitar obstrucciones en su campo de medición.
- El soporte de sujeción fija el módulo a la montura de los lentes manteniendo estabilidad durante el uso.
