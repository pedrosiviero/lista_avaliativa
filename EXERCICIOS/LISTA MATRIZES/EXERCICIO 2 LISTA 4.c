#include <stdio.h>
#include <stdlib.h>
#define LEN 4

int main() {

	int matrix[LEN][LEN];
    int i, j;

	putchar('\n');
    for (i=0; i<LEN; i++) {
        for (j=0; j<LEN; j++) {
            printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
            scanf("%d", &matrix[i][j]);
        }
        putchar('\n');
    }

    int maior = matrix[0][0];
    int posI = 1;
    int posJ = 1;

    for (i=0; i<LEN; i++) {
        for (j=0; j<LEN; j++) {
                if (matrix[i][j] > maior) {
                        maior = matrix[i][j];
                        posI = i+1;
                        posJ = j+1;
				}
        }
    }

    printf("O maior numero da matriz eh: %d [linha %d][coluna %d].\n", maior, posI, posJ);
}
