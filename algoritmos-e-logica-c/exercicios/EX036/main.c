#include <stdio.h>
#include <stdlib.h>

// Leitura de um Vetor e Escrita em Ordem Contrária (ADAPTADA)

int main() {
	
	int vetor[5];
	int i, j, temp;
	
	for (i = 0; i < 5; i++) {
		printf ("| Informe o %d elemento: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	
	printf ("|-------------------------------\n| ");
	for (i = 4; i >= 0; i--) {
		printf ("%d ", vetor[i]);
	}
	
	return 0;
}
