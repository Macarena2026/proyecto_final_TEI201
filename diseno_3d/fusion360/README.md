# Archivos Fusion 360

## Archivos de Fusion 360

| Archivo | Origen | Qué contiene |
| :--- | :--- | :--- |
| [Diseño inicial.stl](./Dise%C3%B1o%20inicial.stl) | Propio, iteración 1 | Primera versión conceptual de la carcasa para el prototipo de lentes inteligentes, se rechazo antes de finalizar debido a que se decidió que el diseño se adecuara a cualquier tipo de lente. |
| [Diseño avance 2.stl](./Dise%C3%B1o%20avance%202.stl) | Propio, iteración 2 | Segunda versión con mejoras en la distribución interna de los componentes electrónicos (sensor GY-530 y ESP32-S3 mini). Idea conceptual sin medidas exactas. |
| [Diseño Avance 3.stl](./Dise%C3%B1o%20Avance%203.stl) | Propio, iteración 3 | Versión refinada con canal óptico biselado para evitar reflejos IR, rejilla de ventilación para el motor vibrador y acoples laterales. Contiene espacio para la ESP3-S3 mini, la bateria LiPo 3,7V 500mAh, el motor de moneda, el sensor de movimiento GY-530 y el interruptor. |
|[Diseño Avance 3.f3z](./Dise%C3%B1o%20Avance%203.f3z) | Propio con componentes de terceros, iteración 3 | Archivo archivado de Fusion 360 (`.f3z`) con el conjunto/modelo y componentes asociados del Avance 3 organizados para verse como en prototipo final. |

## Cómo abrirlos
- Para el `.f3z` (y `.f3d` si aplica), en Fusion 360 usa **File > Open > Open from my computer** (o **Abrir** desde el panel de datos/carpeta local) para restaurar el archivo y sus componentes asociados.
- Para los `.stl`, haz clic en el archivo en GitHub y se abre el visor 3D directamente en el navegador.
### Modelos de terceros

El modelo del Avance 3 (`Diseño Avance 3.f3z` y referencia en `Diseño Avance 3.stl`) incluye modelos o volúmenes de componentes electrónicos/auxiliares que no fueron diseñados desde cero por mí (por ejemplo, modelos de referencia de terceros para la ESP32-S3 mini, sensor GY-530 e interruptor). Están indicados y citados en `FUENTES.md`.

