/*
***********************************
* Desarrollado por Feipe Marina
* Fecha: 4/7/24
*
*/
#ifndef MBED_LDR_H
#define MBED_LDR_H

#include "mbed.h"

#define MIN_LIGHT_VALUE 0.3
float LDRValue(void);
bool LDRCompare(float);

#endif