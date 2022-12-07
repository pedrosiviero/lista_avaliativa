#include <stdlib.h>
#include <stdio.h>

int main(){
int num, soma = 0, positivo = 0;
float media = 0;
while( positivo < 10){
    printf("Digite um numero :");
    scanf("%d", &num);
    soma = soma + num;
     if(num > 0){
            soma = soma + num;
            positivo++;

     }
}
        media = soma / 10;
    printf ("Media: %.2f ", media);
return 0;
}
