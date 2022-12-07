#include<stdio.h>
#include<conio.h>
 int main(){
    int vet[8],x,y,i,soma;
    for(i=1;i<=8;i++)
    {
    printf("Escreva os valores para seu vetor:\n");
        scanf("%d",&vet[i]);
    }
    printf("Escreva o valor do x:\n");
        scanf("%d",&x);

    printf("Escreva o valor do y:\n");
        scanf("%d",&y);
    soma=vet[x]+vet[y];

    printf("\n A soma e:%d",soma);
        getche();
    return(0);
}
