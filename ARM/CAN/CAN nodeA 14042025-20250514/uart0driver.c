#include "header.h"
#define RDR (U0LSR & 1)
#define THRE (U0LSR>>5&1)
void uart0_init(unsigned int baud){
	int result;
	//unsigned int arr[4] = 
	PINSEL0 |= 0x5;
	result = 15000000/(16*baud);
	U0LCR = 0x83; //8n1 baud setteng unlocked
	U0DLL = (result&0xff);
	U0DLM = (result>>8)&0xff;
	U0LCR = 0x03;
}

void uart0_tx_data(unsigned char data){
	U0THR = data;
	while((U0LSR>>5&1) == 0);
}

unsigned char uart0_rx_data(void){
	while((U0LSR&1)==0);
	return U0RBR;	
}

void uart0_tx_string(char *p){
	while(*p){
		U0THR = *p;
		while((U0LSR>>5&1) == 0);
		p++;
	}
}

void uart0_rx_string(char *p,unsigned int len)
{
int i;
for(i=0;i<len;i++)
{
while(RDR==0);
p[i]=U0RBR;
if(p[i]=='\r')
break;
}
p[i]='\0';
}
void uart0_tx_integer(int num)
{
	char a[10];
	int i;
	if(num<0)
	{
		uart0_tx_data('-');
		num=-num;
	}
	if(num==0)
	{
		uart0_tx_data('0');
		return;
	}
	for(i=0;num;num=num/10,i++)
		a[i]=num%10+48;
	for(--i;i>=0;i--)
		uart0_tx_data(a[i]);
}
void uart0_tx_float(float f)
{
	int num;
	if(f<0)
	{
		uart0_tx_data('-');
		f=-f;
	}
	if(f==0)
	{
		uart0_tx_string("0.0");
	return;
	}
	num=f;
	uart0_tx_integer(num);
	uart0_tx_data('.');
	num=(f-num)*1000000;
	uart0_tx_integer(num);
}
void uart0_tx_hex(int num)
{
	unsigned char temp;
	uart0_tx_string("0x");
	temp=(num&0xf0)>>4;
	if(temp>9)
		uart0_tx_data('A'+temp-10);
	else
		uart0_tx_data(temp+48);
	temp=num&0x0f;
	if(temp>9)
		uart0_tx_data('A'+temp-10);
	else
		uart0_tx_data(temp+48);
}
int uart0_rx_integer()
{
	int i,num1;
	char s[10];
	uart0_rx_string(s,10);
	if(s[0]=='-' || s[0]=='+')
		i=1;
	else
		i=0;
	for(num1=0;s[i];i++)
	{
		num1=num1*10+(s[i]-48);
	}
	if(s[0]=='-')
		num1=-num1;
	return num1;
}
float uart0_rx_float()
{
	int i,num1,l=0,num2;
	float result,num3;
	char s[10];
	uart0_rx_string(s,10);
	if(s[0]=='-' || s[0]=='+')
		i=1;
	else
		i=0;
	for(num1=0;s[i]&&s[i]!='.';i++)
	{
		num1=num1*10+(s[i]-48);
	}
	i++;
	for(;s[i];i++)
	{
		num2=num2*10+(s[i]-48);
	}
	num3=num2;
	for(;num2;num2=num2/10)
		l++;
	for(i=0;i<l;i++)
		num3=num3/10;
	result=num1+num3;
	if(s[0]=='-')
		result=-result;
	return result;
}
