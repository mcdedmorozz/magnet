#define F_CPU 8000000UL

#include "io.h"
#include <util/delay.h>


int main(){

DDRB |= _BV(PB0);



	while(1){
	
		PORTB &= ~_BV(PB0);
		
		_delay_us(200000);
		
		PORTB |= _BV(PB0);
		
		_delay_us(600);
	}
return 0;
}