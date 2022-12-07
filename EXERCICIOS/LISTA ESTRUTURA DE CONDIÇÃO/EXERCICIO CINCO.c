#include <stdio.h>
#include <stdlib.h>

int  main(){
  int numero;
  printf("Escreva um numero:");
  scanf("%d", &numero);

  if(numero > 0){
    printf("%d", numero * numero);
  }

  if(numero > 0){
    printf("\n e ao quadrado e %d", sqrt(numero));
  }else{
    printf("Digite outro numero.");
  }

  }
