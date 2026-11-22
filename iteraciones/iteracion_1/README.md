# Iteración 1, concepto inicial

Fecha: `[21-09-2026]`

![Arquitectura de la versión 1](`[ruta/arquitectura_v1.png]`)

## Qué se hizo

El primer diseño planteaba la fabricación directa de unos lentes nuevos para el usuario, posicionando el hardware en el espacio usualmente utilizado para los cristales. Los componentes principales consistían en una ESP3-S3 mini, sensor de movimiento GY-530, motor vibrador de cilindro, modulo de carga TP4056 y un interruptor. 

## Qué se midió

El diseño no llegó a etapa de medición. 

## Problemas encontrados

- [Problema 1]: Los usuarios podían decidir no usar el producto debido a no querer dejar de utilizar sus lentes actuales.
- [Problema 2]: Crear lentes desde cero provoca que el producto pierda versatilidad y aumente su precio de elaboración.
- [Problema 3]: El sistema ubicaba el hardware dentro de un compartimiento que remplazaba los cristales, pero no todas las personas con discapacidad visual están completamente ciegas.

## Decisión

Se decidió crear un nuevo diseño que permitiera acoplar el producto a los lentes del usuario. En consecuencia, para disminuir el tamaño a utilizar se retiro el modelo de carga TP4056 dado que la placa ESP3-S3 mini ya cuenta con es función y se paso a un motor vibrador de moneda. 

## Archivos

El archivo donde se muestra el modelo 3D sin terminar se encuentra en [Diseño inicial.stl](../dise%C3%B1o_3d/fusion360/Diseño%20inicial.stl)
