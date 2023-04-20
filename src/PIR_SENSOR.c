/*****************************************************************
	Title	  :	  Blink Builtin LED
	MCU	    :	  ATMEGA328P
	Author	: 	scamanderoffl
	
*****************************************************************/
#include <avr/io.h>

int main(void)
{
  DDRD&=!(1<<PD1);		//set PORTD PIN 1 as INPUT
  DDRD|=(1<<PD2);		//set PORTD PIN 2 as OUTPUT
  
  while(1)
  {
    if(PIND&(1<<PD1));		//if PIN 1 as HIGH
      PORTD&=!(1<<PD2);		//set PIN 2 as LOW
    else
      PORTD|=(1<<PD2);		// set PIN 2 as HIGH
  }
}
