#include <stdio.h>
#include <stdlib.h>

// Leitura de 4 Notas e Média Aritmética

int main() {
	
	float n1, n2, n3, n4, soma, media;
	
	printf ("Informe a nota 1: ");
	scanf ("%f", &n1);
	printf ("Informe a nota 2: ");
	scanf ("%f", &n2);
	printf ("Informe a nota 3: ");
	scanf ("%f", &n3);
	printf ("Informe a nota 4: ");
	scanf ("%f", &n4);
	
	soma = n1 + n2 + n3 + n4;
	media = soma / 4;
	
	printf ("--------------------------------\n");
	printf (" - Media: %.2f", media);
	
	return 0;
}
