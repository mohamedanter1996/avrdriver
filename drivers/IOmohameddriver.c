/*
 * IOmohameddriver.c
 *
 * Created: 15/09/2019 10:55:12 ص
 *  Author: mohamed anter
 */ 
#include <avr/io.h>
#include "IOmohameddriver.h"

void setportdirection(char portname,int modelevel)
{
	
	if(((DDRA==255)&&(portname==a)&&(modelevel==HIGH))||((DDRA==255)&&(portname==A)&&(modelevel==HIGH)))
	{
		PORTA=0b11111111;
	}
	else if(((DDRA==255)&&(portname==a)&&(modelevel==LOW))||((DDRA==255)&&(portname==A)&&(modelevel==LOW)))
	{
		PORTA=0b00000000;
	}
	
	
	else if(((DDRA==0)&&(portname==a)&&(modelevel==HIGH))||((DDRA==0)&&(portname==A)&&(modelevel==HIGH)))
	{
		PINA=0b11111111;
	}
	else if(((DDRA==0)&&(portname==a)&&(modelevel==LOW))||((DDRA==0)&&(portname==A)&&(modelevel==LOW)))
	{
		PINA=0b00000000;
	}
	
	else if(((DDRB==255)&&(portname==b)&&(modelevel==HIGH))||((DDRB==255)&&(portname==B)&&(modelevel==HIGH)))
	{
		PORTB=0b11111111;
	}
	else if(((DDRB==255)&&(portname==b)&&(modelevel==LOW))||((DDRB==255)&&(portname==B)&&(modelevel==LOW)))
	{
		PORTB=0b00000000;
	}
	
	
	else if(((DDRB==0)&&(portname==b)&&(modelevel==HIGH))||((DDRB==0)&&(portname==B)&&(modelevel==HIGH)))
	{
		PINB=0b11111111;
	}
	else if(((DDRB==0)&&(portname==b)&&(modelevel==LOW))||((DDRB==0)&&(portname==B)&&(modelevel==LOW)))
	{
		PINB=0b00000000;
	}
	
	else if(((DDRC==255)&&(portname==c)&&(modelevel==HIGH))||((DDRC==255)&&(portname==C)&&(modelevel==HIGH)))
	{
		PORTC=0b11111111;
	}
	else if(((DDRC==255)&&(portname==c)&&(modelevel==LOW))||((DDRC==255)&&(portname==C)&&(modelevel==LOW)))
	{
		PORTC=0b00000000;
	}
	
	
	else if(((DDRC==0)&&(portname==c)&&(modelevel==HIGH))||((DDRC==0)&&(portname==C)&&(modelevel==HIGH)))
	{
		PINC=0b11111111;
	}
	else if(((DDRC==0)&&(portname==c)&&(modelevel==LOW))||((DDRC==0)&&(portname==C)&&(modelevel==LOW)))
	{
		PINC=0b00000000;
	}
	
	else if(((DDRD==255)&&(portname==d)&&(modelevel==HIGH))||((DDRD==255)&&(portname==D)&&(modelevel==HIGH)))
	{
		PORTD=0b11111111;
	}
	else if(((DDRD==255)&&(portname==d)&&(modelevel==LOW))||((DDRD==255)&&(portname==D)&&(modelevel==LOW)))
	{
		PORTD=0b00000000;
	}
	
	
	else if(((DDRD==0)&&(portname==d)&&(modelevel==HIGH))||((DDRD==0)&&(portname==D)&&(modelevel==HIGH)))
	{
		PIND=0b11111111;
	}
	else if(((DDRD==0)&&(portname==d)&&(modelevel==LOW))||((DDRD==0)&&(portname==D)&&(modelevel==LOW)))
	{
		PIND=0b00000000;
	}
	
	
	else
	{
		# warning "Please,enter Portname and modelevel in correct spilling"
}

}


void setport(char portname,char modetype )
{
	if(((portname== a )&&(modetype==OUTPUT))||((portname== A)&&(modetype==OUTPUT)))
	{
		DDRA=0b11111111;
		
	}
	else if(((portname== a)&&(modetype==INPUT))||((portname== A)&&(modetype==INPUT)))
	{
		DDRA=0b00000000;
		
	}
	
	else if(((portname== b )&&(modetype==OUTPUT))||((portname== B)&&(modetype==OUTPUT)))
	{
		DDRB=0b11111111;
		
	}
	else if(((portname== b)&&(modetype==INPUT))||((portname== B)&&(modetype==INPUT)))
	{
		DDRB=0b00000000;
		
	}
	
	else if(((portname== c )&&(modetype==OUTPUT))||((portname== C)&&(modetype==OUTPUT)))
	{
		DDRC=0b11111111;
		
	}
	else if(((portname== c)&&(modetype==INPUT))||((portname== C)&&(modetype==INPUT)))
	{
		DDRC=0b00000000;
		
	}
	
	else if(((portname== d )&&(modetype==OUTPUT))||((portname== D)&&(modetype==OUTPUT)))
	{
		DDRD=0b11111111;
		
	}
	else if(((portname== d)&&(modetype==INPUT))||((portname== D)&&(modetype==INPUT)))
	{
		DDRD=0b00000000;
		
	}
	else
	{
	 
	 # warning "Please,enter Portname and modetype in correct spilling"
		
	}
	
}

void setpindirection(int pinnumber,char portname,int modelevel)
{
	if(((portname==a)||(portname==A))&&((DDRA)&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PORTA |=(1<<pinnumber);
	}
	else if(((portname==a)||(portname==A))&&((DDRA)&(1<<pinnumber))&&(modelevel==LOW))
	{
		PORTA &= ~(1<<pinnumber);
	}
	
	else if(((portname==a)||(portname==A))&&((~(DDRA))&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PINA |=(1<<pinnumber);
	}
	else if(((portname==a)||(portname==A))&&((~(DDRA))&(1<<pinnumber))&&(modelevel==LOW))
	{
		PINA &= ~(1<<pinnumber);
	}
	
	
	else if(((portname==b)||(portname==B))&&((DDRB)&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PORTB |=(1<<pinnumber);
	}
	else if(((portname==b)||(portname==B))&&((DDRB)&(1<<pinnumber))&&(modelevel==LOW))
	{
		PORTB &= ~(1<<pinnumber);
	}
	
	else if(((portname==b)||(portname==B))&&((~(DDRB))&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PINB |=(1<<pinnumber);
	}
	else if(((portname==b)||(portname==B))&&((~(DDRB))&(1<<pinnumber))&&(modelevel==LOW))
	{
		PINB &= ~(1<<pinnumber);
	}
	
	
	else if(((portname==c)||(portname==C))&&((DDRC)&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PORTC |=(1<<pinnumber);
	}
	else if(((portname==c)||(portname==C))&&((DDRC)&(1<<pinnumber))&&(modelevel==LOW))
	{
		PORTC &= ~(1<<pinnumber);
	}
	
	else if(((portname==c)||(portname==C))&&((~(DDRC))&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PINC |=(1<<pinnumber);
	}
	else if(((portname==c)||(portname==C))&&((~(DDRC))&(1<<pinnumber))&&(modelevel==LOW))
	{
		PINC &= ~(1<<pinnumber);
	}
	
	
	else if(((portname==d)||(portname==D))&&((DDRD)&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PORTD |=(1<<pinnumber);
	}
	else if(((portname==d)||(portname==D))&&((DDRD)&(1<<pinnumber))&&(modelevel==LOW))
	{
		PORTD &= ~(1<<pinnumber);
	}
	
	else if(((portname==d)||(portname==D))&&((~(DDRD))&(1<<pinnumber))&&(modelevel==HIGH))
	{
		PIND |=(1<<pinnumber);
	}
	else if(((portname==d)||(portname==D))&&((~(DDRD))&(1<<pinnumber))&&(modelevel==LOW))
	{
		PIND &= ~(1<<pinnumber);
	}
	else
	{
	 # warning "Please,enter Pinmunber,Portname and modelevel in correct spilling"
	 	
}
}

void setpin(int pinnumber,char portname,char modetype)
{
	if(((portname==a)||(portname==A))&&(modetype==OUTPUT))
	{
		DDRA|=(1<<pinnumber);
	}
	else if(((portname==a)||(portname==A))&&(modetype==INPUT))
	{
		DDRA &= ~(1<<pinnumber);
	}
	
	
	
	else if(((portname==b)||(portname==B))&&(modetype==OUTPUT))
	{
		DDRB|=(1<<pinnumber);
	}
	else if(((portname==b)||(portname==B))&&(modetype==INPUT))
	{
		DDRB &= ~(1<<pinnumber);
	}
	
	
	else if(((portname==c)||(portname==C))&&(modetype==OUTPUT))
	{
		DDRC|=(1<<pinnumber);
	}
	else if(((portname==c)||(portname==C))&&(modetype==INPUT))
	{
		DDRC &= ~(1<<pinnumber);
	}
	
	
	else if(((portname==d)||(portname==D))&&(modetype==OUTPUT))
	{
		DDRD|=(1<<pinnumber);
	}
	else if(((portname==d)||(portname==D))&&(modetype==INPUT))
	{
		DDRD &= ~(1<<pinnumber);
	}
	else
	{
		 # warning "Please,enter Pinmunber,Portname and modetype in correct spilling"
		 
	}
}

int readPin(int pinnumber,char portname)
{
	if(((portname==a)||(portname==A))&&((DDRA)&(1<<pinnumber))&&((PORTA)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==a)||(portname==A))&&((DDRA)&(1<<pinnumber))&&(~(PORTA)&(1<<pinnumber)))
	{
		return 0;
	}
	
	else if(((portname==a)||(portname==A))&&(~(DDRA)&(1<<pinnumber))&&((PINA)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==a)||(portname==A))&&(~(DDRA)&(1<<pinnumber))&&(~(PINA)&(1<<pinnumber)))
	{
		return 0;
	}
	
	
	
	else if(((portname==b)||(portname==B))&&((DDRB)&(1<<pinnumber))&&((PORTB)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==b)||(portname==B))&&((DDRB)&(1<<pinnumber))&&(~(PORTB)&(1<<pinnumber)))
	{
		return 0;
	}
	
	else if(((portname==b)||(portname==B))&&(~(DDRB)&(1<<pinnumber))&&((PINB)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==b)||(portname==B))&&(~(DDRB)&(1<<pinnumber))&&(~(PINB)&(1<<pinnumber)))
	{
		return 0;
	}
	
	else if(((portname==c)||(portname==C))&&((DDRC)&(1<<pinnumber))&&((PORTC)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==c)||(portname==C))&&((DDRC)&(1<<pinnumber))&&(~(PORTC)&(1<<pinnumber)))
	{
		return 0;
	}
	
	else if(((portname==c)||(portname==C))&&(~(DDRC)&(1<<pinnumber))&&((PINC)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==c)||(portname==C))&&(~(DDRC)&(1<<pinnumber))&&(~(PINC)&(1<<pinnumber)))
	{
		return 0;
	}
	
	

	
	else if(((portname==d)||(portname==D))&&((DDRD)&(1<<pinnumber))&&((PORTD)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==d)||(portname==D))&&((DDRD)&(1<<pinnumber))&&(~(PORTD)&(1<<pinnumber)))
	{
		return 0;
	}
	
	else if(((portname==d)||(portname==D))&&(~(DDRD)&(1<<pinnumber))&&((PIND)&(1<<pinnumber)))
	{
		return 1;
	}
	
	else if(((portname==d)||(portname==D))&&(~(DDRD)&(1<<pinnumber))&&(~(PIND)&(1<<pinnumber)))
	{
		return 0;
	}
	
	else
	{
	
	 # warning "Please,enter Pinmunber,Portname and modetype in correct spilling"
		
	}
	
}