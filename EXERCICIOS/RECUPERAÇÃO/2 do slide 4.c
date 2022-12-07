#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, num3, num4;
    int media;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite um numero: ");
    scanf("%f", &num2);

    printf("Digite um numero: ");
    scanf("%f", &num3);

    printf("Digite um numero: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("A media e %f", media);


}
