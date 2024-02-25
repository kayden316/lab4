#include <stdio.h>

int main() {
    int num, reverse = 0, remainder,orginal;

    printf("Enter an integer: ");
    scanf("%d", &num);
orginal = num;
    while (num != 0) {
        remainder = num % 10;  
        reverse = reverse * 10 + remainder;  
        num /= 10;  
    }

    if(orginal == reverse){
        printf(" %d is palindrome", orginal);
    }
    else
        printf("%d is not palindrome", orginal);
    

    return 0;
}
