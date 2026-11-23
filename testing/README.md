# Pruebas y validación

## Objetivo
Comprobar que el prototipo acoplable alerta de forma efectiva ante obstáculos a distintas distancias, permite que el usuario se detenga a tiempo y entrega información útil para tomar decisiones de mejora. La validación se organizó según el enfoque del proyecto y las pruebas realizadas en el Avance 3.

## Niveles de validación

| Nivel | Qué se probó | Estado en este proyecto |
| :--- | :--- | :--- |
| **Pruebas prácticas con usuarios** | Cinco personas (`U01` a `U05`) con ojos vendados y el dispositivo acoplado: percepción de vibración a distancia corta, intermedia y lejana, y detención al caminar en línea recta ante un obstáculo[cite: 3]. | **Real**, datos registrados en [Archivo pruebas practicas.xlsx](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/testing/datos/Archivo%20pruebas%20practicas.xlsx) y respaldo fotográfico (`Sesion_U01.jpeg` a `Sesion_U05.jpeg`). |
| **Pruebas de banco / sensor en terreno** | Mediciones automáticas de distancia continua del sensor o registros en serie durante recorridos completos. | **No aplicado en este avance** (la validación del Avance 3 se centró en pruebas prácticas presenciales con usuarios). |

## Carpetas de testing

| Carpeta | Contenido |
| :--- | :--- |
| `informes` | Reporte y documentación asociada a las pruebas de usuario del Avance 3. |
| `datos` | Planilla con las respuestas de los 5 usuarios (`Archivo pruebas practicas.xlsx`) y documentación de datos. |
| `evidencias` | Fotografías de las sesiones con los 5 usuarios (`Sesion_U01.jpeg` a `Sesion_U05.jpeg`) y gráficos de resultados. |

## Documentos principales
* [Archivo pruebas practicas.xlsx](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/testing/datos/Archivo%20pruebas%20practicas.xlsx)[cite: 4]
* `[Reporte de testing — pendiente de enlazar si lo subes en PDF/MD]`

## Resumen de resultados

| Prueba | Resultado | Origen |
| :--- | :---: | :--- |
| Percepción de vibración a corta distancia | 100 % (5 de 5)[cite: 3] | Real (`U01` a `U05`) |
| Percepción de vibración a distancia intermedia | 80 % (4 de 5)[cite: 3] | Real (`U01` a `U05`) |
| Percepción de vibración a distancia lejana | 80 % (4 de 5)[cite: 3] | Real (`U01` a `U05`) |
| Detención ante obstáculo por alerta vibratoria | 100 % (5 de 5)[cite: 3] | Real (`U01` a `U05`) |
| Calificación promedio del dispositivo (escala 1–7) | 6,4 / 7 (mín. 6, máx. 7)[cite: 3] | Real (`U01` a `U05`) |
| Disposición a recomendar el dispositivo | 40 % Sí (2 de 5) / 60 % No (3 de 5)[cite: 3] | Real (`U01` a `U05`) |

