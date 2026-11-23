# Reporte de Testing de Usuarios — Avance 3

## 1. Introducción
* **Objetivo del testing:**
Evaluar el desempeño práctico y la percepción del prototipo acoplable de alerta vibratoria en sesiones reales con usuarios, verificando la sensación de la vibración a distintas distancias, la capacidad de detenerse a tiempo ante la alerta de un obstáculo a una separación aleatoria y el nivel de satisfacción general.
* **Metodología utilizada:**
Se utilizan pruebas practicas presenciales en usuarios (U01 a U05). Primero se les venda los ojos y posiciona el dispositivo, luego se les pregunta a tres distancias (cerca, intermedio y lejos) si son capaces de sentir la vibración del motor; finalizando, se les pide que caminen en línea recta y se detengan al percibir la advertencia del prototipo frente a un obstáculo ubicado delante de ellos.  

## 2. Descripción de Participantes
* **Perfil de usuarios:**
Muestra compuesta por 5 participantes (`U01`, `U02`, `U03`, `U04` y `U05`) que probaron el prototipo acoplable durante la sesión de validación final.

## 3. Protocolo Aplicado
* **Pasos del testing:**
  1. Entrega del prototipo acoplable y explicación breve del funcionamiento de la alerta vibratoria.
  2. Se le consulta a tres distancias (cerca, intermedio y lejos) si son capaces de sentir la vibración del motor.
  3. Se les solicita que caminen en línea recta y se detengan en caso de percibir la advertencia, por parte del prototipo, de encontrarse frente a un obstáculo ubicado delante de ellos. 
  4. Registro de las preguntas de uso y satisfacción, junto con la captura fotográfica de la sesión.
* **Preguntas realizadas:**
  * *Uso del prototipo:*
    * ¿Sintió las vibraciones cuando el objeto estaba a corta distancia?
    * ¿Sintió la vibración a una distancia intermedia?
    * ¿Sintió la vibración cuando el objeto estaba lejos?
    * ¿Se detuvo gracias a que la vibración le alertó del obstáculo?
  * *Satisfacción y opinión del usuario:*
    * Del 1 al 7, ¿cómo calificaría al dispositivo? (1 = terrible, 7 = excelente)
    * ¿Recomendaría el uso del dispositivo?
    * Comentario
* **Métricas evaluadas:**
Percepción de vibración por rango de distancia (corta, intermedia y lejos), tasa de detención efectiva ante obstáculos, calificación general del dispositivo (escala 1–7), disposición a recomendarlo y comentarios cualitativos.

## 4. Resultados Cuantitativos
* **Tablas de datos:**

| Usuario | Corta distancia | Distancia intermedia | Lejos | Detención por alerta | Calificación (1-7) | Recomendaría |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| U01 | Sí | Sí | Sí | Sí | 6 | Sí |
| U02 | Sí | Sí | No | Sí | 6 | Sí |
| U03 | Sí | Sí | Sí | Sí | 7 | No |
| U04 | Sí | Sí | Sí | Sí | 7 | No |
| U05 | Sí | No | Sí | Sí | 6 | No |

* **Gráficos de resultados:**
![Gráfico de detección del objeto de prueba](Gr%C3%A1fico%20de%20detecci%C3%B3n%20del%20objeto%20de%20prueba.png)

![Gráfico de la sensación del motor vibrador](Gr%C3%A1fico%20de%20la%20sensaci%C3%B3n%20del%20motor%20vibrador.png)
* **Análisis estadístico básico:**
  * **Percepción de vibración:** 100% (5/5) a corta distancia; 80% (4/5) a distancia intermedia; 80% (4/5) a distancia lejana.
  * **Detención ante obstáculo:** 100% (5/5) de los usuarios se detuvo gracias a la alerta vibratoria.
  * **Calificación general (escala 1–7, N = 5):** Media = **6.4**, Mediana = **6.0**, Desviación estándar ≈ **0.55**, Mínimo = **6**, Máximo = **7**.
  * **Recomendación:** 40% (2/5) respondió «Sí» y 60% (3/5) respondió «No».

## 5. Resultados Cualitativos
* **Feedback de usuarios:** Los usuarios `U01` y `U02` calificaron el dispositivo con 6 y manifestaron que sí lo recomendarían (sin comentarios adicionales registrados)[cite: 3]. En cambio, `U03` y `U04` (calificación 7) y `U05` (calificación 6) indicaron que no lo recomendarían en su estado actual y señalaron un mismo motivo: **«Sobrestimulante»**.
* **Observaciones del equipo:** El dispositivo cumple su función principal de alertar y lograr que la persona se detenga ante el obstáculo, pero la intensidad o persistencia de la vibración puede resultar excesiva para algunos usuarios durante el uso.
* **Problemas identificados:**
  * Sensación de **sobrestimulación** por la vibración reportada por 3 de los 5 participantes.
  * Casos puntuales de no percepción en distancia intermedia (`U05`) y lejana (`U02`).

## 6. Validación de Impacto ODS
* **Métricas de impacto medidas:** Capacidad de advertir sobre obstáculos y promover desplazamientos más seguros mediante un dispositivo acoplable (`100%` de detención efectiva en la prueba con `U01`–`U05`).
* **Proyección de escalabilidad:** Al evolucionar hacia un diseño acoplable a lentes existentes, el prototipo tiene potencial de adaptarse a distintos usuarios sin exigir reemplazar sus lentes habituales, siempre que se ajuste la modulación de la vibración para evitar la sobrestimulación.

## 7. Conclusiones
* **Fortalezas del prototipo:** Alta efectividad para generar una alerta oportuna y lograr que el usuario se detenga ante un obstáculo (100% de los casos evaluados), además de una buena valoración numérica general (promedio de 6.4/7).
* **Limitaciones identificadas:** La vibración resulta **sobrestimulante** para la mayoría de los usuarios encuestados (3 de 5), lo que frena su recomendación, y existen variaciones aisladas en la percepción según la distancia (`U02` lejos, `U05` intermedio).
* **Recomendaciones para mejoras futuras:** Ajustar la intensidad, duración o patrón de la vibración para reducir la sobrestimación y calibrar la respuesta en rangos intermedios y lejanos antes de nuevas rondas de prueba.

## 8. Anexos
* **Datos raw:** Planilla de pruebas prácticas en [Archivo pruebas practicas.xlsx](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/testing/datos/Archivo%20pruebas%20practicas.xlsx) y registros fotográficos en [evidencias/](https://github.com/Macarena2026/proyecto_final_TEI201/tree/main/testing/evidencias).
