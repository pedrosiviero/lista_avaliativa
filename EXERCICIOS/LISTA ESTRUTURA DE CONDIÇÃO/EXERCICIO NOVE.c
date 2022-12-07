#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, op;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Agora, digite 1 para multiplicacao, 2 para adicao, 3 para subtracao, 4 para divisao: ");
    scanf("%d", &op);

    if(op == 1){
        printf("O resultado e %d", num1 * num2);
    }
    if(op == 2){
        printf("O resultado e %d", num1 + num2);
    }
    if(op == 3){
        printf("O resultado e %d", num1 - num2);
    }
    if(op == 4){
        printf("O resultado e %d", num1 / num2);
    }
}


