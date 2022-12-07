#include <stdio.h>
#include <stdlib.h>

int eleva(int f, int c) {
	if (f == c) return f;
	else return c;
}

int main() {
	int c, f;
	c = (f -32.0) * (5.0/9.0);

	printf("\nDigite a temperatura: ");
	scanf("%d", &f);

	printf("\nResultado: %d.\n\n", c);

	return 0;
}
