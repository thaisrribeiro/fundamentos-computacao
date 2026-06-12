#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Impressão de Uma Palavra vezes a Quantidade de Caracteres 

int main() {
	
	char palavra[50];
	int tam, i;
	
	printf ("| Escreva uma palavra: ");
	gets (palavra);
	tam = strlen(palavra);
	
	printf ("|-------------------------------\n| Caracteres: %d \n|-------------------------------", tam);
	for (i = 0; i < tam; i++) {
		printf ("\n| %d - %s", i+1, palavra);
	}
	
	return 0;
}
