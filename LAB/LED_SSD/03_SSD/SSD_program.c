/********************************************************************/
/*  Author    : Sara Ahmed Rageh                                   */
/*  Layer     : HAL                                               */ 
/*  SWC       : Seven_segments                                   */
/****************************************************************/
 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include "SSD_private.h"

static u8 Local_u8Numbers[]= SSD_Number_Arr;



void SSD_voidInitDataPort    (SSD_Type SSD_Configuration )
{
	
	DIO_voidSetPortDirection (SSD_Configuration.DataPort ,0xFF);
	
}

void SSD_voidWrite   (SSD_Type SSD_Configuration ,u8 number)
{
	
	if(SSD_Configuration.Type == SSD_COMMON_CATHODE)
	{
		DIO_voidSetPortValue     (SSD_Configuration.DataPort ,Local_u8Numbers[number] );
	}
	else if(SSD_Configuration.Type == SSD_COMMON_ANODE)
	{
		DIO_voidSetPortValue     (SSD_Configuration.DataPort , ~(Local_u8Numbers[number]) );
	}
}

void SSD_voidEnable  (SSD_Type SSD_Configuration)
{
	
	if(SSD_Configuration.Type == SSD_COMMON_CATHODE)
	{
		DIO_voidSetPinDirection (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_OUTPUT);
		DIO_voidSetPinValue     (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_LOW);
		
	}
	else if (SSD_Configuration.Type == SSD_COMMON_ANODE)
	{
		
		DIO_voidSetPinDirection (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_OUTPUT);
		DIO_voidSetPinValue     (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_HIGH);
		
	}
	
}

void SSD_voidDisable (SSD_Type SSD_Configuration)
{
	
	if(SSD_Configuration.Type == SSD_COMMON_CATHODE)
	{
		DIO_voidSetPinDirection (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_OUTPUT);
		DIO_voidSetPinValue     (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_HIGH);
		
	}
	else if (SSD_Configuration.Type == SSD_COMMON_ANODE)
	{
		
		DIO_voidSetPinDirection (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_OUTPUT);
		DIO_voidSetPinValue     (Configuration.DataPort,Configuration.EnablePin,DIO_PIN_LOW);
		
	}
}

void SSD_voidSendNumber( SSD_Type Copy_structConfig , u8 Copy_u8Number ){

	if( Copy_structConfig.Type == SSD_COMMON_CATHODE ){

		DIO_voidSetPortValue( Copy_structConfig.DataPort , Local_u8SSDNumbers[ Copy_u8Number ] );

	}else if( Copy_structConfig.Type == SSD_COMMON_ANODE ){

		DIO_voidSetPortValue( Copy_structConfig.DataPort , ~( Local_u8SSDNumbers[ Copy_u8Number ] ) );

	}

}