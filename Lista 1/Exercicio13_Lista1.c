#include <stdio.h>

int main(void){
    int x,n,i=1;

    printf("Digite primeiro o valor de x e depois o valor a ser elevado(n): \n");
    scanf("%d %d", &x, &n);

    int r = x;

    do{
        r = r * x;
        i++;
    }while(i < n);

    printf("%d elevado a %d e: %d\n", x, n, r);

    return 0;
}
