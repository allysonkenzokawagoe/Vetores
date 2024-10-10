#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[15], par = 0, mult5 = 0;

    for(int i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0) {
            par++;
        } else if(vetor[i] % 5 == 0) {
            mult5++;
        }
    }

    printf("Existem %d numeros pares e %d numeros multiplos de 5", par, mult5);

    return 0;
}
