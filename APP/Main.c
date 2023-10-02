#include "../MCAL/DIO/DIO_Interface.h"
#include <util/delay.h>

int main(void)
{
	DIO_enu_SetPinDiretion(DIO_PIN_GROUP_A, DIO_PIN_4, DIO_PIN_WRITE);
	DIO_enu_SetPinValue(DIO_PIN_GROUP_A, DIO_PIN_4, DIO_LOW);

	while (1)
	{
		_delay_ms(500);
		DIO_enu_TogglePinValue(DIO_PIN_GROUP_A, DIO_PIN_4);
		_delay_ms(500);
		
	}
	
	return 0;
}
