/*main_i2c.c*/
/*Testing i2c driver with
  DS1307 i2c-slave
	SA: 1101000 
	*/
#include "header.h"
main(){
	u8 h,m,s;
	lcd_init();
	i2c_init();
	/*Set RTC time to 11:59:55 PM*/
	i2c_send(0xD0,0x2,0x23);//Set hrs to 11pm
	i2c_send(0xD0,0x1,0x59);//Set mins to 59
	i2c_send(0xD0,0x0,0x55);//Set secs to 55
	
	/*Read & Print RTC time on the lcd*/
	while(1){
		h=i2c_read(0xD1,0x2);//read hrs
		m=i2c_read(0xD1,0x1);//read mins
		s=i2c_read(0xD1,0x0);//read secs
		lcd_cmd(0x80);
		lcd_data((h/0x10)+48);
		lcd_data((h%0x10)+48);
		lcd_data(':');
		
		lcd_data((m/0x10)+48);
		lcd_data((m%0x10)+48);
		lcd_data(':');
		
		lcd_data((s/0x10)+48);
		lcd_data((s%0x10)+48);
	}	
}
