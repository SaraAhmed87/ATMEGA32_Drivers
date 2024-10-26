/********************************************************************/
/*  Author    : Sara Ahmed Rageh                                   */
/*  Layer     : MCAL                                              */ 
/*  SWC       : DIO / GPIO                                       */
/****************************************************************/
  
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0  0
#define DIO_PIN1  1
#define DIO_PIN2  2
#define DIO_PIN3  3
#define DIO_PIN4  4
#define DIO_PIN5  5
#define DIO_PIN6  6
#define DIO_PIN7  7

#define DIO_PORT_OUTPUT 0XFF
#define DIO_PORT_INPUT   0

#define DIO_PORT_HIGH    0XFF
#define DIO_PORT_LOW     0


#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT  0

#define DIO_PIN_HIGH   1
#define DIO_PIN_LOW    0

#define PUD  2



void  DIO_voidSetPinDirection  (u8 Copy_u8PORT ,u8 Copy_u8PIN ,u8 Copy_u8Direction);
void  DIO_voidSetPortDirection (u8 Copy_u8PORT ,u8 Copy_u8Direction);
void  DIO_voidSetPinValue      (u8 Copy_u8PORT ,u8 Copy_u8PIN ,u8 Copy_u8Value);
void  DIO_voidSetPortValue     (u8 Copy_u8PORT ,u8 Copy_u8Value);
void  DIO_voidClearPinValue    (u8 Copy_u8PORT ,u8 Copy_u8PIN);
void  DIO_voidClearPortValue   (u8 Copy_u8PORT);
void  DIO_voidTogglePinValue   (u8 Copy_u8PORT ,u8 Copy_u8PIN);
void  DIO_voidWritePortValue   (u8 Copy_u8PORT ,u8 Copy_u8Value);
u8    DIO_voidGetPinValue      (u8 Copy_u8PORT ,u8 Copy_u8PIN);
u8    DIO_voidGetPortValue     (u8 Copy_u8PORT);



#endif 