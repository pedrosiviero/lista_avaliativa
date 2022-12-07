#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, contador;
    printf("Escreva um numero:\n");
        scanf("%d", &num);
        for(contador = 0;contador <= num; num--){
                if(num % 2 != 0){
                                printf("%d\n", num);
                }
        }
            printf("\nFim.");
}
