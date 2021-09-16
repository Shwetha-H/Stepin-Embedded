#include <avr/io.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"


int main()
{
    uint16_t temp;


    activity1();
    activity_2();
   activity3_PWM(temp);

    return 0;
}
