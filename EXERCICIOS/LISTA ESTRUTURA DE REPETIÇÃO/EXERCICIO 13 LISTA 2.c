#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, contador, lidos = 0, contlidos = 0;
    printf("Escreva a quantidade de  numeros a serem lidos:\n");
        scanf("%d", &contador);
        for(int numperg = 0;numperg < contador; numperg++){
            printf("Escreva o numero:\n");
                scanf("%d", &num);
                if(num > lidos){
                        lidos = num;
                        contlidos = 0;
                }
                if(lidos == num){
                        contlidos++;
                }
        }
            printf("\n o maior num lido foi: %d", lidos);
            printf("\n a quantidade de vezes que o maior numero foi escrito e: %d", contlidos);
            printf("\nFim.");
}
