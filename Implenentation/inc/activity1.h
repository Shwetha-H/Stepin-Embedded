#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define LED_PORT (PORTB) // led port number
#define LED_PIN (PB0) // led pin number
#define DRIVER_PIN (PC6) // to check whether the driver is seated
#define HEATER_PIN (PD4) // to check whether the heater is turned on

#include <avr/io.h>


void activity1();


#endif // ACTIVITY1_H_INCLUDED
