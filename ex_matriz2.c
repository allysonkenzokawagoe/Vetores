#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[5][3];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite a nota do bimestre do aluno %d: ", i);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("A nota do aluno %d no bimestre foi de: %d\n", i, matriz[i][j]);
        }
    }

    return 0;
}
