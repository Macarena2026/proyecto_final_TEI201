# Arquitectura del software

```text
Inicio
  ↓
Inicializar Serial e I²C
  ↓
Inicializar sensor VL53L0X ── error ──> Mostrar mensaje y detenerse
  ↓ correcto
Configurar medición continua y PWM
  ↓
Leer distancia en mm
  ↓
¿Timeout o distancia > 1500 mm? ─ sí ─> PWM = 0
  │ no
  ↓
¿Distancia ≤ 500 mm? ─ sí ─> PWM = 255
  │ no
  ↓
Calcular PWM proporcional entre 90 y 255
  ↓
Aplicar PWM al circuito del motor y mostrar datos por Serial
  └──────────────────── repetir loop ────────────────────┘
```

## Módulos lógicos
1. **Inicialización:** configura comunicación serial, bus I²C, sensor y PWM.
2. **Adquisición:** obtiene la lectura continua de distancia.
3. **Decisión:** compara la distancia con los umbrales configurados.
4. **Actuación:** ajusta el ciclo de trabajo PWM del motor vibrador.
5. **Diagnóstico:** informa fallos de inicialización y muestra distancia/PWM por el puerto serial.
