 #include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    printf("Digite um numero para saber se e par ou impar: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
}
