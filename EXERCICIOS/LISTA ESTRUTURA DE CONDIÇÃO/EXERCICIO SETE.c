#include <stdio.h>
#include <stdlib.h>

int main(){

   int id;
   printf("Digite um numero correspondente ao numero de um mes: ");
   scanf("%d", &id);

   if(id == 1){
    printf("Janeiro");
   }
   if(id == 2){
    printf("Fevereiro");
   }
   if(id == 3){
    printf("Marco");
   }
   if(id == 4){
    printf("Abril");
   }
   if(id == 5){
    printf("Maio");
   }
   if(id == 6){
    printf("Junho");
   }
   if(id == 7){
    printf("Julho");
   }
   if(id == 8){
    printf("Agosto");
   }
   if(id == 9){
    printf("Setembro");
   }
   if(id == 10){
    printf("Outubro");
   }
   if(id == 11){
    printf("Novembro");
   }
   if(id == 12){
    printf("Dezembro");
   }
   if(id == 0 || id > 12){
    printf("Invalido");
   }

}
