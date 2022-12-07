#include <stdio.h>
#include <stdlib.h>
#define LEN 5

int main() {
	int matriz[LEN][LEN];
	int i, j, somaDiagonais=0;

	putchar('\n');
	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);

			if ((i==j) || (i+j == LEN-1)) somaDiagonais += matriz[i][j];

		}
		putchar('\n');
	}

	printf("Soma das diagonais: %d.\n", somaDiagonais);

	return 0;
}
