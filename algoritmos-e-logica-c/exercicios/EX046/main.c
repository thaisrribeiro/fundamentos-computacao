#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// LER UMA PALAVRA E IMPRIMIR O NÚMERO DE VEZES QUE O USUÁRIO DESEJAR

int main() {
	
	int vezes, i;
	char palavra[50];
	
	printf ("| Escreva uma palavra: ");
	gets (palavra);
	printf ("| Quantas vezes deseja imprimi-la? : ");
	scanf ("%d", &vezes);
	printf ("|------------------------------------");
	for (i = 0; i < vezes; i++) {
		printf ("\n| %d - %s", i+1, palavra);
	}	
	
	return 0;
}
