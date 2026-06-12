#include <stdio.h>
#include <stdlib.h>

// Vetor Dinâmico

int main() {
	
	int tamanho;
	int *vetor = NULL;
	int i;
	
	printf ("| Informe o valor do vetor: ");
	scanf ("%d", &tamanho);
	
	vetor = (int *) malloc (sizeof(int)*tamanho);
	
	if (vetor == NULL) {
		printf ("| Erro: Memoria nao Disponivel.");
	}
	else {
		printf ("|------------------------\n|");
		for (i = 0; i < tamanho; i++) {
			vetor[i] = i*i;
			printf (" %d", vetor[i]);
		}
		free (vetor);
		vetor = NULL;
	}
	
	return 0;
}
