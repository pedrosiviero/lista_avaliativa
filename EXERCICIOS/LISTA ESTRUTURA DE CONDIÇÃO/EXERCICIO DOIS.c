#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Escreva um numero: ");
    scanf("%d", &num1);
    printf("Escreva outro numero: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("O maior numero e %d", num1);
    } else{
        printf("O maior numero e %d", num2);
    }

    if(num1 == num2){
        printf("Os dois numeros sao iguais");
    }
    system("pause");
    return 0;
}
