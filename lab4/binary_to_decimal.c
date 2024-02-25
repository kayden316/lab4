#include<stdio.h>
#include<math.h>
int main(){
    int num, remainder, decimal, n=0;
    printf("Enter a binary number : ");
    scanf("%d", &num);
    while(num){
        remainder = num%10;
        if (remainder != 0 && remainder != 1) {
            printf("please enter a binary number");
        }
        else
        decimal = remainder *pow(2,n) + decimal;
        n++;
        num/=10;

    }
    printf("The number in decimal is %d", decimal);
    return 0;
    }
