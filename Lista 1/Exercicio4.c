#include <stdio.h>

int main(){
    int ano, atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);
    printf("Digite o ano atual: ");
    scanf("%d", &atual);

    idade = atual - ano;

    printf("Sua idade atual e: %d", idade);

    return 0;
}
