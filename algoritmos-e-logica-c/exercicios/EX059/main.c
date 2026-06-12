#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Receber uma palavra e retornar o número de vogais
int contarVogais (char nome[]);

int main() {
	
	int vogais;
	char palavra[50];
	printf ("| Escreva uma palavra: ");
	fgets (palavra, 50, stdin);
	palavra [strcspn(palavra, "\n")] = 0;
	vogais = contarVogais(palavra);
	printf ("|-----------------------------------\n");
	printf ("| %s tem %d vogais.", palavra, vogais);
	return 0;
	
}

int contarVogais (char palavra[]) {
	
	int i, tamanho;
	int quantidade = 0;
	strupr (palavra);
	tamanho = strlen (palavra);
	for (i = 0; i <= tamanho; i++) {
		if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
			quantidade++;
		}
	}
	return quantidade;
	
}
