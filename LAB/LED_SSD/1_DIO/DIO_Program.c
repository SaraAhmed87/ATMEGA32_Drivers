/********************************************************************/
/*  Author    : Sara Ahmed Rageh                                   */
/*  Layer     : MCAL                                              */ 
/*  SWC       : DIO / GPIO                                       */
/****************************************************************/
 


#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_Register.h"
#include "DIO_Interface.h"

void  DIO_voidSetPinDirection  (u8 Copy_u8PORT ,u8 Copy_u8PIN ,u8 Copy_u8Direction)
{
	if (1 == Copy_u8Direction)
	{
		switch(Copy_u8PORT)
		{
			case 0 : SET_BIT(DDRA,Copy_u8PIN);   break;
			case 1 : SET_BIT(DDRB,Copy_u8PIN);   break;
			case 2 : SET_BIT(DDRC,Copy_u8PIN);   break;
			case 3 : SET_BIT(DDRD,Copy_u8PIN);   break;
			
		}
	}
	else if (0 == Copy_u8Direction)
	{
		switch(Copy_u8PORT)
		{
			case 0 : CLR_BIT(DDRA,Copy_u8PIN);   break;
			case 1 : CLR_BIT(DDRB,Copy_u8PIN);   break;
			case 2 : CLR_BIT(DDRC,Copy_u8PIN);   break;
			case 3 : CLR_BIT(DDRD,Copy_u8PIN);   break;
			
		}
	}
}
void  DIO_voidSetPinValue      (u8 Copy_u8PORT ,u8 Copy_u8PIN ,u8 Copy_u8Value)
{
	if (1 == Copy_u8Value)
	{
		switch(Copy_u8PORT)
		{
			case 0 : SET_BIT(PORTA,Copy_u8PIN);   break;
			case 1 : SET_BIT(PORTB,Copy_u8PIN);   break;
			case 2 : SET_BIT(PORTC,Copy_u8PIN);   break;
			case 3 : SET_BIT(PORTD,Copy_u8PIN);   break;
			
		}
	}
	else if (0 == Copy_u8Value)
	{
		switch(Copy_u8PORT)
		{
			case 0 : CLR_BIT(PORTA,Copy_u8PIN);   break;
			case 1 : CLR_BIT(PORTB,Copy_u8PIN);   break;
			case 2 : CLR_BIT(PORTC,Copy_u8PIN);   break;
			case 3 : CLR_BIT(PORTD,Copy_u8PIN);   break;
			
		}
	}
}
void  DIO_voidClearPinValue    (u8 Copy_u8PORT ,u8 Copy_u8PIN)
{
	switch(Copy_u8PORT)
		{
			case 0 : CLR_BIT(PORTA,Copy_u8PIN);   break;
			case 1 : CLR_BIT(PORTB,Copy_u8PIN);   break;
			case 2 : CLR_BIT(PORTC,Copy_u8PIN);   break;
			case 3 : CLR_BIT(PORTD,Copy_u8PIN);   break;
			
		}
}
void  DIO_voidTogglePinValue   (u8 Copy_u8PORT ,u8 Copy_u8PIN)
{
	switch(Copy_u8PORT)
		{
			case 0 : TOG_BIT(PORTA,Copy_u8PIN);   break;
			case 1 : TOG_BIT(PORTB,Copy_u8PIN);   break;
			case 2 : TOG_BIT(PORTC,Copy_u8PIN);   break;
			case 3 : TOG_BIT(PORTD,Copy_u8PIN);   break;
			
		}
}
u8    DIO_voidGetPinValue      (u8 Copy_u8PORT ,u8 Copy_u8PIN)
{
	u8 LOC_u8Result = 0;
	
	switch(Copy_u8PORT)
		{
			case 0 : LOC_u8Result = GET_BIT(PINA,Copy_u8PIN);   break;
			case 1 : LOC_u8Result = GET_BIT(PINB,Copy_u8PIN);   break;
			case 2 : LOC_u8Result = GET_BIT(PINC,Copy_u8PIN);   break;
			case 3 : LOC_u8Result = GET_BIT(PIND,Copy_u8PIN);   break;
			
		}
	return LOC_u8Result;
}

 






