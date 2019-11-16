/*
 * IOmohameddriver.h
 *
 * Created: 15/09/2019 10:52:13 ص
 *  Author: mohamed anter
 */ 


#ifndef IOMOHAMEDDRIVER_H_
#define IOMOHAMEDDRIVER_H_

#define INPUT 27
#define OUTPUT 28
#define HIGH  38
#define LOW 39
#define ALLpin 45
#define  ALLPORTS 46
#define A 55
#define a 56
#define B 57
#define b 58
#define C 61
#define c 62
#define D 59
#define d 60


void setportdirection(char portname,int modelevel);


void setport(char portname,char modetype );

void setpindirection(int pinnumber,char portname,int modelevel);


void setpin(int pinnumber,char portname,char modetype);

int readPin(int pinnumber,char portname);

#endif /* IOMOHAMEDDRIVER_H_ */