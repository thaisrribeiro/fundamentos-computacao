#include <stdio.h>
#include <stdlib.h>

// Leitura de Nome e Boas Vindas

int main() {
	
	char nome [50];
	
	printf ("Informe o nome: ");
	scanf ("%s", nome);
	printf ("Boas Vindas a disciplina de Linguagem e Tecnicas de Programacao, %s!", nome);
	
	return 0;
}
