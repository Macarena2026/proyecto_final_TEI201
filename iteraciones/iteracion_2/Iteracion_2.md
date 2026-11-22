# Iteración 2 - Primera Mejora Significativa
Fecha: `[19-10-2026]`

![Diagrama conceptual de la Iteración 2](<./Arquitectura iteración 2.png>)

> **Limitación:**
La batería seleccionada provocaba que se necesitará un espacio superior al deseado. El modelaje del encapsulado era puramente ideal sin tomar en cuenta las limitaciones por las dimensiones reales de los componentes. 

## Qué se hizo

En esta segunda iteración se planteó un diseño acoplable a los lentes del usuario. Este se planteó de forma puramente referencial, al no contar aún con medidas exactas ni las dimensiones reales de los componentes. Por otra parte, se probo el funcionamiento exitoso del hardware, pero por las nuevas dimensiones del nuevo modelo se cambio la batería LiPo plana 3.7V 2000 mha a una de 500 mha. 


## Qué se midió

Se midió la funcionabilidad del motor respecto al sensor con 3 distancias diferentes, en cada una el nivel de vibración variaba para alertar al usuario de la cercanía del obstaculo.

## Problemas encontrados

- **Problema 1:** El tamaño de la batería original no se ajustaba al encapsulado.
- **Problema 2:** Se detecto el desconocimiento de la efectividad de los niveles de vibración frente a alertar al usuario.
- **Problema 3:** La construcción ideal del encapsulado, sin tomar en cuenta ninguna dimensión real.

## Decisión

Se decidió cambiar la batería por una más pequeña y rehacer el modelo 3D tomando en cuenta las dimensiones reales de los componentes.

## Archivos

El modelo 3D correspondiente a esta etapa se encuentra en [diseno_3d/fusion360/Diseño avance 2.stl](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/diseno_3d/fusion360/Dise%C3%B1o%20avance%202.stl) . El diagrama del hardware de esta etapa se encuentra en [hardware/esquemas/Diagrama Circuitos 2.0 protoboard.jpeg](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/hardware/esquemas/Diagrama%20Circuitos%202.0%20protoboard.jpeg)
