//only for three digit, but we cand make this genric -> pow(digit, total_digit_count)
#include<stdio.h>
#include<math.h>
int main(){
        int sr, er, sum, c, temp, digit;
        printf("\nEnter start and count: ");
        scanf("%d %d", &sr, &c);
        for(int num = sr; ; num++){
                temp = num;
                sum=0;
                while(temp){
                        digit = temp%10;
                        sum += (int)pow(digit,3);
                        temp /= 10;
                }
                if(sum ==num){
			
                        printf("%d ",num);
                        c --;
			if(c==0)
				break;
                }
        }
        printf("\n");
}

