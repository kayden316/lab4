#include<stdio.h>
int main(){
    int num, remainder = 0, binary, place=1;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    while (num>0)
    {
        remainder = num%2;
        binary=(remainder*place) + binary;
        place = place * 10;
        num/=2;
    
    }
    printf("the binary conversion is %d", binary);
    return 0;
}