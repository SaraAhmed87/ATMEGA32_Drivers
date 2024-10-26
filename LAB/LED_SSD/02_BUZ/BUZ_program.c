/********************************************************************/
/*  Author    : Sara Ahmed Rageh                                   */
/*  Layer     : HAL                                               */ 
/*  SWC       : BUZ                                              */
/****************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "BUZ_interface.h"


void BUZ_voidInit    (BUZ_Type BUZ_Configuration)
{
	
	DIO_voidSetPinDirection(BUZ_Configuration.Port,BUZ_Configuration.Pin,BUZ_Configuration.DIO_PIN_OUTPUT);
	
}

void BUZ_voidOn      (BUZ_Type BUZ_Configuration)
{
	
	if(BUZ_Configuration.Active_State == ACTIVE_HIGH)
	{
		
		DIO_voidSetPinValue(BUZ_Configuration.Port,BUZ_Configuration.Pin,BUZ_Configuration.DIO_PIN_HIGH);
		
	}
	else if (BUZ_Configuration.Active_State == ACTIVE_LOW)
	{
		
		DIO_voidSetPinValue(BUZ_Configuration.Port,BUZ_Configuration.Pin,BUZ_Configuration.DIO_PIN_LOW);
		
	}
}

void BUZ_voidOff     (BUZ_Type BUZ_Configuration)
{
	
	if(BUZ_Configuration.Active_State == ACTIVE_HIGH)
	{
		
		DIO_voidSetPinValue(BUZ_Configuration.Port,BUZ_Configuration.Pin,BUZ_Configuration.DIO_PIN_LOW);
		
	}
	else if (BUZ_Configuration.Active_State == ACTIVE_LOW)
	{
		
		DIO_voidSetPinValue(BUZ_Configuration.Port,BUZ_Configuration.Pin,BUZ_Configuration.DIO_PIN_HIGH);
		
	}
	
}

void BUZ_voidToggle  (BUZ_Type BUZ_Configuration)
{
	
	DIO_voidTogglePinValue   (BUZ_Configuration.Port,BUZ_Configuration.Pin );
	
	
}
