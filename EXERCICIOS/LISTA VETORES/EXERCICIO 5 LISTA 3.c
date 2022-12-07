#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, contador;
    int num2[10];

    for(i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num2[i]);
        if(num2 % 2 == 0){
            contador++;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d", (num2[i] + num2[i]) / 10);
        if(num2 % 2 == 0){
            contador++;
        }
    }
    printf("%dSao a quantidade de numeros pares armazenados: ", contador);
    return 0;
}
