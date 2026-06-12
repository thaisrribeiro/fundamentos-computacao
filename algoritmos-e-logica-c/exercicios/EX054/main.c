#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Contagem de Consoantes em uma String

int contarConsoantes (char string[]);

int main() {
	
	const int MAX = 50;
	char palavra[MAX];
	int quantidade;
	
	printf ("| - Escreva uma palavra: ");
	fgets (palavra, MAX, stdin);
	palavra [strcspn(palavra, "\n")] = 0;
	quantidade = contarConsoantes (palavra);
	printf ("|-------------------------------\n");
	printf ("| A palavra '%s' possui %d consoantes.", palavra, quantidade);
	return 0;
	
}

int contarConsoantes (char string[]) {
	
	int i, tam;
	int qtd = 0;
	strupr (string);
	tam = strlen(string);
	for (i = 0; i < tam; i++) {
		if (string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U') {
			qtd++;
		}
	}
	return qtd;

}
