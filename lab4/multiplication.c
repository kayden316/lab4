#include<stdio.h>
int main(){
    int i, j, k;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
           k= i*j;
            printf("\n%d * %d = %d", i, j, k);
        }
        printf("\n");
    }
    return 0;
}