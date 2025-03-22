#include "lcd_header.h"

main(){
int i;
 lcd_init();
 //lcd_data('R');
 while(1){
 for(i = 0; i<16; i++) {
 lcd_cmd(0x80+i);
 lcd_str("Ranjan Kumar");
 delay_ms(200);
 lcd_cmd(0x01); 
}
}
}
