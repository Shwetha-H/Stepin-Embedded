#include "activity1.h"
#include "activity2.h"
#include <util/delay.h>

uint16_t temp;
void activity1(){
    DDRB|=(1<<LED_PIN); // set pin for LED
    DDRD&=~(1<<HEATER_PIN); // clear bit
    DDRC&=~(1<<DRIVER_PIN); // clear bit

    PORTD|=(1<<HEATER_PIN); // set bit
    PORTC|=(1<<DRIVER_PIN); // set bit

    while(1)
        {
            if (!(PIND&(1<<HEATER_PIN))&& !(PINC&(1<<DRIVER_PIN)))
            {
                LED_PORT|=(1<<LED_PIN); // switch ON LED
                _delay_ms(200);
                activity_2();
                activity3_PWM(temp);
            }
            else
            {
                LED_PORT&=~(1<<LED_PIN);
                _delay_ms(200);
            }
        }
    return 0;
}

