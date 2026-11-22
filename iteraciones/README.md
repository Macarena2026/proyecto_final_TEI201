# Historial de iteraciones

El proceso iterativo es lo que se evalúa en esta carpeta. Cada versión cuenta qué se probó, qué falló y qué se cambió.

## Estructura

```
iteraciones/
├── iteracion_1/    Concepto inicial: lentes completos desde cero con TP4056 y motor de cilindro. 
├── iteracion_2/    Modelo acoplable conceptual sin TP4056 y con motor vibrador de moneda.
└── iteracion_3/    Sistema completo y diseño 3D refinado (avance 3), con nueva batería. 
```

## Tabla comparativa

| Aspecto | v1 | v2 | v3 |
|---|---|---|---|
| Fecha | 21-09-2026 | `[19-10-2026]` | `[23-11-2026]` |
| Microcontrolador y sensor | ESP32-S3 mini + GY-530 | ESP32-S3 mini + GY-530 | ESP32-S3 mini + GY-530 |
| Energía y carga | Batería LiPo 3.7 V 2000 mAh + módulo TP4056 + interruptor | Batería LiPo 3.7 V 2000 mAh (carga integrada en ESP32-S3 mini) | Batería LiPo 3.7 V 500 mAh |
| Actuador | Motor vibrador de cilindro | Motor vibrador de moneda | Motor vibrador de moneda |
| Diseño 3D / Carcasa | Lentes completos (reemplaza cristales) | Carcasa acoplable conceptual | Carcasa acoplable refinada (`Diseño Avance 3`) |
| Medición / Pruebas | Sin etapa de medición | Mediciones de funcionalidad del motor sin afinar al usuario | Mediciones del sistema con usuarios reales |
| Principal problema | Obliga a dejar los lentes actuales, encarece y bloquea visión residual | No cuenta con medidas reales y el tamaño de la batería no se acopla a la idea de proyecto | No se conoce el funcionamiento del modelo a largo plazo |

## Lecciones aprendidas

1. Diseñar lentes desde cero reduce la adopción si el usuario ya utiliza lentes propios o conserva visión residual; pasar a un módulo acoplable mejora la versatilidad y reduce costos.
2. Aprovechar las funciones integradas del hardware (como el circuito de carga del ESP32-S3 mini en lugar del TP4056) y cambiar a un motor de moneda ahorra espacio clave dentro de la carcasa.
3. Al generar el diseño del modelo siempre se tiene que tomar en cuenta las dimensiones reales de los componentes que van dentro. 

## Detalle por versión

- [Iteración 1](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/iteraciones/iteracion_1/Iteraci%C3%B3n_1.md)
- [Iteración 2](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/iteraciones/iteracion_2/Iteracion_2.md)
- [Iteración 3](https://github.com/Macarena2026/proyecto_final_TEI201/blob/main/iteraciones/iteracion_3/Iteraci%C3%B3n_3.md)
