#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Impressão de Vogais de uma Palavra caso a Quantidade de Caracteres seja Ímpar

int main() {
	
	char palavra[50];
	int tam, i;
	
	printf ("| Escreva uma palavra: ");
	gets (palavra);
	strupr(palavra);
	tam = strlen(palavra);
	printf ("|-----------------------------------------\n");
	if (tam % 2 != 0) {
	printf ("| VOGAIS DA PALAVRA '%s' \n| ", palavra);
		for (i = 0; i < tam; i++) {
			if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
				printf ("%c ", palavra[i]);
			}
		}
	}
	else {
		printf ("| [!] NENHUMA IMPRESSAO: QUANTIDADE DE CARACTERES PAR.");
	}
		
	return 0;
}
