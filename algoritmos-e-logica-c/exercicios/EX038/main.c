#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Letras nas Posições Pares de um Nome

int main() {
	
	char nome[30];
	int tam, i;
	
	printf ("| Digite um nome: ");
	gets (nome);
	tam = strlen(nome);
	
	printf ("|--------------------------\n| ");
	for (i = 0; i <= tam; i += 2) {
		printf ("%c ", nome[i]);
	}
	
	return 0;
}
