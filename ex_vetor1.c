#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[10];
    float media, soma = 0;

    for(int i = 0; i<10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        soma += vet[i];
    }

    media = soma / 10;

    for(int j = 0; j<10; j++){
        printf("O valor na posição %d vetor %d\n", j, vet[j]);
    }

    printf("A media dos vetores eh de: %.2f e a sua soma eh de %.2f", media, soma);

    return 0;
}
