#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, cont;
    while(cont<2){
            printf("Digite um numero: ");
            scanf("%d", &num);

    if(num % num == 1 && num % 1 == 1 && num > 1){
        printf("Esse numero e primo");
    } else{
        printf("Esse numero nao e primo");
    }
    break;
    }
}
