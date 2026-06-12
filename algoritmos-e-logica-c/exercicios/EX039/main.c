#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Palavra Invertida

int main() {
	
	char palavra[50];
	int tam, i;
	
	printf ("| Escreva uma palavra: ");
	gets(palavra);
	tam = strlen(palavra);
	
	printf ("|-------------------------------\n| ");
	for (i = tam; i >= 0; i--) {
		printf("%c", palavra[i]);
	}
	
	return 0;
}
