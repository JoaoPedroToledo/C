#include <stdio.h>

int main(){
    int nro;
    printf("Digite um numero: ");
    scanf("%d", &nro);
    printf("O fatorial do num %d e: %d", nro, fatorial(nro));

    return 0;
}
int fatorial(int n){
    while(n > 1){
        return n* fatorial(n-1);
    }
 }
