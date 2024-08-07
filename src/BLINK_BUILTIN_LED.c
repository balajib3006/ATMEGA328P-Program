/*****************************************************************

	Title  : Blink Builtin LED
	MCU    : ATMEGA328P
	Author : Balaji
	
*****************************************************************/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB=(1<<PB5);		 //set PORTB PIN 5 as output
    while (1)
    {
        PORTB=(1<<PB5);		//set PIN 5 as HIGH
        _delay_ms(100);
        PORTB=0;	       //set PIN 5 as LOW
        _delay_ms(100);
    }
    
}
