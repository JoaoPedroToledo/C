#include <stdio.h>

int main(void){
    int n,x=0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(x=0; x<n; x++){
        if(x%2 != 0)
            printf("%d\n", x);
    }
    return 0;
}
