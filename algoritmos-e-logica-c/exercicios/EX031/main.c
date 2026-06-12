#include <stdio.h>
#include <stdlib.h>

// Leitura de Frase e Número de Vezes de Impressão

int main() {
	
	char frase [100];
	int qtd, i;
	
	printf ("Informe uma frase: ");
	scanf(" %[^\n]", frase);
	
	printf ("Informe a quantidade de vezes que deseja imprimi-la: ");
	scanf ("%d", &qtd);
	
	printf ("--------------------------------\n\n");
	for (i = 0; i < qtd; i++) {
		printf ("| %s \n", frase);
	}
	
	return 0;
}
