#include <stdio.h>

int main(void){
    int x,aux=0,i=0;
    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &x);

    do{
        aux = aux + i;
        i++;

    }while(i<=x);

    printf("Resultado: %d", aux);

    return 0;
}
