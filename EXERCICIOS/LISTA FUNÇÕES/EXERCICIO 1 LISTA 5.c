#include <stdio.h>
#include <stdlib.h>

float maior_valor(float a, float b)
{
??? if(a > b) return a;
??? else return b;
}


int main()
{
?????? float? a, b;
??????
?????? printf("Informe o primeiro n?mero: ");
?????? scanf("%f", &a);
??????
?????? printf("Informe o segundo n?mero: ");
?????? scanf("%f", &b);
??????
?????? printf("\nO maior valor ?: %.3f", maior_valor(a,b));
??????
??? return 0;
}
