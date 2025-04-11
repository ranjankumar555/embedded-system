/*main_i2c.c*/
/*Testing i2c driver with
  DS1307 i2c-slave
	SA: 1101000 
	*/
#include "header.h"
main(){
	u8 temp;
	uart0_init(9600);
	i2c_init();
	uart0_tx_string("I2C Initialised...\r\n");
	i2c_send(0xD0,0x3,'A');
	temp=i2c_read(0xD1,0x3);
	uart0_tx(temp);//loopback
}
