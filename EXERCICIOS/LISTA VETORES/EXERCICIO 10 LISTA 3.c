#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, contador;
    int num2[10];

    for(i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num2[i]);
        }

    for(i = 0; i < 10; i++){
        printf("%d\n", num2[i]);
        }

    return 0;
    }

