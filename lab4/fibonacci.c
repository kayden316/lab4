#include<stdio.h>
int main(){
    int n, f1=0, f2=1, f3=f1+f2;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("\n%d", f3);
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    return 0;
}