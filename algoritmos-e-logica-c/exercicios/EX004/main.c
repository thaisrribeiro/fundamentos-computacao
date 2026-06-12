#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Leitura de Dois Números e Exponenciação

int main() {
	
	int a, b, total;
	
	printf ("Informe o primeiro numero: ");
	scanf ("%d", &a);
	printf ("Informe o segundo numero: ");
	scanf ("%d", &b);
	
	total = pow(a,b);
	printf ("--------------------------------\n");
	printf (" - %d elevado a %d equivale a %d.", a, b, total);
	
	return 0;
}
