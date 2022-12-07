#include <stdio.h>
#include <stdlib.h>
int main() {
    int contador, num = 16;
        for(contador = 0;contador < num; num--){
                if(num % 3 != 0){
                                printf("%d\n", num);
                }
        }
            printf("\nFim.");
}
