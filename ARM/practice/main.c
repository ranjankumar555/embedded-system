#include "header.h"

main(){
	int i, temp;
	lcd_init();
	
	while(1){
		for(i = 0; i<60; i++){
			temp = i/10 + 48;
			lcd_data(temp);

			temp = i%10 + 48;
			lcd_data(temp);

			delay_sec(1);
			lcd_cmd(0x01);
		}
	}
}

 