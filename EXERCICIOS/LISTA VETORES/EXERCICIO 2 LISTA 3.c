#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int num2[6];

    for(i = 0; i < 6; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num2[i]);
    }

    printf("\n\n");
    for(i = 5; i >= 0; i--){
        printf("%d ", num2[i]);
    }

    return 0;
}
