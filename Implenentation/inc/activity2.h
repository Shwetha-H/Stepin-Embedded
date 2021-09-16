#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

#include <avr/io.h>

void InitAdc();
uint16_t ReadAdc(uint8_t ch);
void activity_2();

#endif // ACTIVITY2_H_INCLUDED
