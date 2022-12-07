#include <stdio.h>
#include <stdlib.h>

int main(){
    int produto, id;
    printf("Ola. Digite 1 para MG, 2 para SP, 3 para RJ e 4 para MS: ");
    scanf("%d", &id);

        if(id > 4 || id < 0){
        printf("Estado invalido.");
    }

    printf("Escreva qual e o valor do produto: ");
    scanf("%d", &produto);

    if(id == 1){
        printf("Com os impostos, fica %d", (produto * 0,07) + produto);
}
    if(id == 2){
        printf("Com os impostos, fica %d", (produto * 0,012) + produto);
}
    if(id == 3){
        printf("Com os impostos, fica %d", (produto * 0,015) + produto);
}

    if(id == 4){
        printf("Com os impostos, fica %d", (produto * 0,07 + 0,01) + produto);
}





}
