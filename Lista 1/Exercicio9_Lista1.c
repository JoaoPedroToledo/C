#include <stdio.h>

int main(void){
    int nro1, nro2, escolha, calc=1;

        printf("Entre com a operacao desejada\n");
        printf("1-Divisao\n2-Resto da Divisao\n3-Adicao\n4-Multiplicacao\n5-Sair\n");

        do{
            scanf("%d", &escolha);

            switch(escolha){
                case 1: {
                    printf("Digite os valores desejados para a Divisao:");
                    scanf("%d %d", &nro1, &nro2);
                    printf("Resultado: %d\n", nro1/nro2);
                    break;
                }
                case 2: {
                    printf("Digite os valores desejados para o Resto da Divisao: \n");
                    scanf("%d %d", &nro1, &nro2);
                    printf("Resultado: %d\n", nro1%nro2);
                    break;
                }
                case 3: {
                    printf("Digite os valores desejados para a Adicao: \n");
                    scanf("%d %d", &nro1, &nro2);
                    printf("Resultado: %d\n", nro1+nro2);
                    break;
                }
                case 4 : {
                    printf("Digite os valores desejados para a Multiplicacao: \n");
                    scanf("%d %d", &nro1, &nro2);
                    printf("Resultado: %d\n", nro1*nro2);
                    break;
                }
               case 5: {
                    calc = 0;
                    break;
                }
            }
    }while(calc != 0);
    return 0;
}
