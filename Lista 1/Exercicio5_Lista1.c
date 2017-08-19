#include <stdio.h>

int main(){
    int x;
    printf("Digite um numero positivo: ");
    scanf("%d", &x);

    if(x %2 == 0){
        printf("O numero %d e par", x);
    }
    else{
        printf("O numero %d e impar", x);
    }
    return 0;
}
