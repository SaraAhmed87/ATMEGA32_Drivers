/********************************************************************/
/*  Author    : Sara Ahmed Rageh                                   */
/*  Layer     : HAL                                               */ 
/*  SWC       : KPD                                              */
/****************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_Interface.h"
#include "KPD_config.h"
#include "KPD_interface.h"

void KPD_voidInit   (void)
{
	DIO_voidSetPinDirection(KPD_PORT,KPD_R0,DIO_PIN_INPUT);
	DIO_voidSetPinDirection(KPD_PORT,KPD_R1,DIO_PIN_INPUT);
	DIO_voidSetPinDirection(KPD_PORT,KPD_R2,DIO_PIN_INPUT);
	DIO_voidSetPinDirection(KPD_PORT,KPD_R3,DIO_PIN_INPUT);
	
	DIO_voidSetPinValue((KPD_PORT,KPD_R0,DIO_PIN_HIGH);
	DIO_voidSetPinValue((KPD_PORT,KPD_R1,DIO_PIN_HIGH);
	DIO_voidSetPinValue((KPD_PORT,KPD_R2,DIO_PIN_HIGH);
	DIO_voidSetPinValue((KPD_PORT,KPD_R3,DIO_PIN_HIGH);
	
	DIO_voidSetPinDirection(KPD_PORT,KPD_C0,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(KPD_PORT,KPD_C1,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(KPD_PORT,KPD_C2,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(KPD_PORT,KPD_C3,DIO_PIN_OUTPUT);
	
	DIO_voidSetPinValue((KPD_PORT,KPD_R0,DIO_PIN_HIGH);
	DIO_voidSetPinValue((KPD_PORT,KPD_R1,DIO_PIN_HIGH);
	DIO_voidSetPinValue((KPD_PORT,KPD_R2,DIO_PIN_HIGH);
	DIO_voidSetPinValue((KPD_PORT,KPD_R3,DIO_PIN_HIGH);
	
	
}

u8   KPD_u8GetPressed( void ){

	u8 LOC_u8ReturnData = NOTPRESSED ;
	u8 LOC_u8GetPressed ;
	u8 LOC_u8Row ;
	u8 LOC_u8Col ;

	for( LOC_u8Col = 0 + KPD_COL_INIT ; LOC_u8Col < KPD_COL_END + 1 ; LOC_u8Col++ ){

		DIO_enumSetPinValue    ( KPD_PORT , LOC_u8Col , DIO_PIN_LOW );   // Low on the columns

		for( LOC_u8Row = 0 +KPD_ROW_INIT ; LOC_u8Row < KPD_ROW_END + 1 ; LOC_u8Row++ ){

			DIO_voidGetPinValue( KPD_PORT , LOC_u8Row , &LOC_u8GetPressed ); // retun the row value
			 
			if( LOC_u8GetPressed == 0 )
			{

				_delay_ms(50);    

				DIO_voidGetPinValue( KPD_PORT , LOC_u8Row , &LOC_u8GetPressed );   

				if( LOC_u8GetPressed == 0 )

				{

					LOC_u8ReturnData = KPD_u8Buttons[ LOC_u8Row - KPD_ROW_INIT ][ LOC_u8Col - KPD_COL_INIT ];

				}

				 
				DIO_voidGetPinValue( KPD_PORT , LOC_u8Row , &LOC_u8GetPressed );
				while( DIO_PIN_LOW == LOC_u8GetPressed ) /*  This cond for safty instead of (LOC_u8GetPressed == DIO_PIN_LOW) if i foget = */
				{

					DIO_voidGetPinValue( KPD_PORT , LOC_u8Row , &LOC_u8GetPressed );

				}

				break ;

			}

		}

		 
		DIO_voidSetPinValue    ( KPD_PORT , LOC_u8Col , DIO_PIN_HIGH );

	}

	return LOC_u8ReturnData ;

}

 