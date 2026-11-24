#ifndef ACTUADORES_H
#define ACTUADORES_H

#include <Arduino.h>

void iniciarMotor();
int calcularVibracion(int distanciaMm);
void setVibracion(int intensidad);

#endif
