#include <stdio.h>
#include <stdlib.h>

// Maior e Menor Número

int main() {
	
	int a, b, c, d, e;
	int maior, menor;
	
	printf ("Informe o primeiro numero: ");
	scanf ("%d", &a);
	printf ("Informe o segundo numero: ");
	scanf ("%d", &b);
	printf ("Informe o terceiro numero: ");
	scanf ("%d", &c);
	printf ("Informe o quarto numero: ");
	scanf ("%d", &d);
	printf ("Informe o quinto numero: ");
	scanf ("%d", &e);
	
	maior = a;
	if (maior < b) {
		maior = b;
	}
	if (maior < c) {
		maior = c;
	}
	if (maior < d) {
		maior = d;
	}
	if (maior < e) {
		maior = e;
	}
	
	menor = a;
	if (menor > b) {
		menor = b;
	}
	if (menor > c) {
		menor = c;
	}
	if (menor > d) {
		menor = d;
	}
	if (menor > e) {
		menor = e;
	}
	
	printf ("--------------------------------\n");
	printf (" Maior: %d | Menor: %d", maior, menor);
	
	return 0;
}
