#include <stdio.h>

int main(){
    int x, y, soma=0;

    printf("Entre com dois numeros: ");
    scanf("%d %d", &x, &y);
    soma = x + y;
    printf("Resultado: %d", soma);

    return 0;
}
