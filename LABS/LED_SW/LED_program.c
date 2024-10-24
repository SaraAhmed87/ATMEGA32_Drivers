/********************************************************************/
/*  Author    : Sara Ahmed Rageh                                   */
/*  Layer     : HAL                                               */ 
/*  SWC       : LED                                              */
/****************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "LED_interface.h"


void LED_voidInit    (LED_Type LED_Configuration)
{
	
	DIO_voidSetPinDirection(LED_Configuration.Port,LED_Configuration.Pin,LED_Configuration.DIO_PIN_OUTPUT);
	
}

void LED_voidOn      (LED_Type LED_Configuration)
{
	
	if(LED_Configuration.Active_State == ACTIVE_HIGH)
	{
		
		DIO_voidSetPinValue(LED_Configuration.Port,LED_Configuration.Pin,LED_Configuration.DIO_PIN_HIGH);
		
	}
	else if (LED_Configuration.Active_State == ACTIVE_LOW)
	{
		
		DIO_voidSetPinValue(LED_Configuration.Port,LED_Configuration.Pin,LED_Configuration.DIO_PIN_LOW);
		
	}
}

void LED_voidOff     (LED_Type LED_Configuration)
{
	
	if(LED_Configuration.Active_State == ACTIVE_HIGH)
	{
		
		DIO_voidSetPinValue(LED_Configuration.Port,LED_Configuration.Pin,LED_Configuration.DIO_PIN_LOW);
		
	}
	else if (LED_Configuration.Active_State == ACTIVE_LOW)
	{
		
		DIO_voidSetPinValue(LED_Configuration.Port,LED_Configuration.Pin,LED_Configuration.DIO_PIN_HIGH);
		
	}
	
}

void LED_voidToggle  (LED_Type LED_Configuration)
{
	
	DIO_voidTogglePinValue   (LED_Configuration.Port,LED_Configuration.Pin );
	
	
}



