#include<stdio.h>
#include<math.h>

void isPalindrome(int);
void isArmstrong(int);
void isStrong(int);
void isPrime(int);
void isPerfect(int);

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    isPalindrome(n);
    isArmstrong(n);
    isStrong(n);
    isPrime(n);
    isPerfect(n);

    return 0;
}

void isPalindrome(int num){
    int temp = num, rev = 0;
    while(temp){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(rev == num){
        printf("%d is a palindrome number\n", num);
    }
    else{
        printf("%d is not a palindrome number\n", num);
    }
}

void isArmstrong(int num){
    int temp = num, sum = 0, digits = 0;

    // Find number of digits in the number
    while(temp != 0){
        temp /= 10;
        digits++;
    }

    temp = num;
    // Calculate the sum of the power of each digit
    while(temp != 0){
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == num){
        printf("%d is an Armstrong number\n", num);
    }
    else{
        printf("%d is not an Armstrong number\n", num);
    }
}

void isStrong(int num){
    int temp = num, sum = 0;

    // Calculate the sum of the factorial of each digit
    while(temp != 0){
        int rem = temp % 10;
        int fact = 1;
        for(int i = 1; i <= rem; i++){
            fact *= i;
        }
        sum += fact;
	fact = 1;
        temp /= 10;
    }

    if(sum == num){
        printf("%d is a Strong number\n", num);
    }
    else{
        printf("%d is not a Strong number\n", num);
    }
}

void isPrime(int num){
    if(num <= 1){
        printf("%d is not a prime number\n", num);
        return;
    }

    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            printf("%d is not a prime number\n", num);
            return;
        }
    }

    printf("%d is a prime number\n", num);
}

void isPerfect(int num){
    int sum = 0;

    // Find the sum of divisors of num
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        printf("%d is a perfect number\n", num);
    }
    else{
        printf("%d is not a perfect number\n", num);
    }
}

