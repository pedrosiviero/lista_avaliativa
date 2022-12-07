#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    printf("Escreva um numero pra saber se e divisivel por 3 ou 5:\n");
        scanf("%d", &i);
        if(i % 5 == 0 && i % 3 == 0){
            printf("Divisivel por 3 e 5, invalido");
        }
             if(i % 5 == 0 ){
                printf("Divisivel por 5");
        }
            if(i % 3 == 0 ){
                    printf("Divisivel por 3");
            }
        return 0;
}
