#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int num2[5];

    for(i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num2[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d", (num2[i] + num2[i]) / 5);

    }
                printf("\n%d", num2[i]);
    return 0;
}

