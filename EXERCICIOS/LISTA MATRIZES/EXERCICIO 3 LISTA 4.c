#include <stdio.h>
#include <locale.h>

float segundos(float H, float M, float S) {
		float min,calculo,ho;
		calculo=(S+(M*60)+(H*60*60));
		return calculo;
	}

int main () {

	setlocale(LC_ALL, "Portuguese");

	float H,M,S;

	printf("\nDigite a hora, o(s) minuto(s) e o(s) segundo(s): \n");
	scanf("%f%f%f",&H,&M,&S);

	printf("\nO total de segundos s�o: %f",segundos(H,M,S));
}
