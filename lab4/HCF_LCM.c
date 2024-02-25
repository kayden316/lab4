#include<stdio.h>
int main(){
    int num1,num2,a,orginal1,orginal2,lcm;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    orginal1=num1;
    orginal2=num2;
    while (num2 !=0)
    {
        a=num1%num2;
        num1 = num2;
        num2=a;
    }
    printf("The HCF is %d", num1);
    lcm = orginal1 * orginal2 / num1;
    printf("\nThe LCM is %d", lcm);
    return 0;

}