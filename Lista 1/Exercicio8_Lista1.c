#include <stdio.h>

int main(void){
    int n,i=0;

    printf("Entre com o valor: ");
    scanf("%d", &n);

    for(i=0;i<=10;i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
 }
