#include"header.h"
extern unsigned char temp;
void uart0_handler(void)__irq
{
int r=U0IIR;//identifies uart0 interrupt(rx int or tx int)
if(r&4)//if data recieved
{
temp=U0RBR;//rx data
U0THR=temp;//loop back
}
if(r&2)//if data transmitted
{
}
VICVectAddr=0;//to finish isr execution
}
void config_vic(void)
{
VICIntSelect=0;//all irq interrupt
VICVectCntl0=6|(1<<5);//int num 6 (uart0) to slot 0 and enable slot 0
VICVectAddr0=(int)uart0_handler;//store uart0 isr to slot 0
VICIntEnable|=(1<<6);//enable uart0 interrupt
}
void en_uart0_interrupt(void)
{
U0IER=0x3;//en tx and rx int
}