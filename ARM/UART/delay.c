 #include<lpc21xx.h>

 void delay_ms(unsigned char ms){
 T0TC =0;
 T0PC = 0;
 T0PR = 15000 -1;
 T0TCR = 1;
 while(T0TC < ms);
 T0TCR = 0;
 }

 void delay_sec(unsigned char sec){
 T0TC =0;
 T0PC = 0;
 T0PR = 15000000 -1;
 T0TCR = 1;
 while(T0TC < sec);
 T0TCR = 0;
 }
