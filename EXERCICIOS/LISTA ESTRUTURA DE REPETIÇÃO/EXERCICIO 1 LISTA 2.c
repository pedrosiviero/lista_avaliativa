#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, contador;
    printf("Escreva um numero:\n");
        scanf("%d", &num);
        for(contador = 0; contador <= num; contador++){
            printf("%d\n", contador);
        }
            printf("\nFim.");
}
