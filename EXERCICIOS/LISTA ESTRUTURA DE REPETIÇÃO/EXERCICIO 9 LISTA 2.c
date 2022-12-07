#include <stdlib.h>
#include <stdio.h>

int main(){
int numero, menor = 1000, maior = -1000;
for(int i = 10; i > 0; i--){
    printf("Digite um valor: ");
    scanf("%d", &numero);
    if(menor >= numero){
        menor = numero;
    }
    if(maior <= numero){
        maior = numero;
    }
}
printf("Numero menor digitado: %d.\n", menor);
printf("Numero maior digitado: %d.", maior);
return 0;
}
