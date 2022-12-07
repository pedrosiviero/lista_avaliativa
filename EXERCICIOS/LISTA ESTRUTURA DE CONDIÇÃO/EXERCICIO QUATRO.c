#include <stdio.h>
#include <stdlib.h>

float  main(){
  float salario, prestacao;
  printf("Escreva o seu salario:");
  scanf("%f", &salario);
  printf("Escreva o valor da prestacao:");
  scanf("%f", &prestacao);

  if(prestacao > (salario / 5)){
    printf("Emprestimo nao concedido.");

  } else{
    printf("Emprestimo concedido.");
  }


}
