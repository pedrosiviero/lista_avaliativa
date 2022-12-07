#include <stdlib.h>
#include <stdio.h>

int main(){
int num, soma = 0;
float media = 0;
for(int i = 10; i > 0; i--){
    printf("Digite um valor: ");
    scanf("%d", &num);
    soma = soma + num;
}
media = soma/10;
printf("Soma: %.2f.", media);
return 0;
}
