#include <stdio.h>

int main(void){
    int nro,x,z=1;

    while(z != 0){
        printf("Digite um numero diferente de zero: ");
        scanf("%d", &x);
        printf("%d\n", x*x);

        if (x == 0){
            z=0;
            printf("Numero invalido");
        }
    }
    return 0;
 }
