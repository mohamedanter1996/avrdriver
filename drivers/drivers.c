/*
 * drivers.c
 *
 * Created: 13/09/2019 07:26:14 م
 *  Author: mohamed anter
 */ 


#include <avr/io.h>

#include "IOmohameddriver.h"


int main(void)

{
	setport(a,OUTPUT);
	setpin(3,d,INPUT);
	setpindirection(3,d,LOW);
	setportdirection(a,LOW);
    while(1)
    {
		
		if(readPin(2,d))
		{
			setportdirection(a,HIGH);
		}
	
	else
	{
		setportdirection(a,LOW);
	}		
   }
   return 0;
}



