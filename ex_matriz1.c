#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            matriz[i][j] = i * j;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            printf("O valor na linha %d e na coluna %d eh: %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
