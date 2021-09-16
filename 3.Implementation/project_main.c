/**
 * @file project_main.c
 * @author Satyajit Patil
 * @brief main code
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
#include "Activity_1.h"
#include "Activity_2.h"
#include "Activity_3.h"
#include "Activity_4.h"

int main(void)
{
    initialise();
     InitADC();
    USARTInit(103);
    uint16_t tempdata=0;

    while(1)
    {
        if(occupied)
        {
            PORTB|=(1<<PB0);
            _delay_ms(200);
           
            config_timer();
            pwm_output();
            _delay_ms(200);
            
            tempdata=temp_disp();
            USARTWrite(tempdata);
            _delay_ms(20);
        }
        
        else
        {
           PORTB&=~(1<<PB0);
          _delay_ms(200);
          OCR1A = 0; 
          
        }
    }
    return 0;
}
