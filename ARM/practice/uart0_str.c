void uart_str(char *p){
 	while(*p){
		uart_data(*p);
		delay_ms(50);
		p++;
	}
}
