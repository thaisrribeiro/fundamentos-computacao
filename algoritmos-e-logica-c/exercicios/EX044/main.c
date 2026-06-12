#include <stdio.h>
#include <stdlib.h>

// Vetor em Ordem Decrescente

int main() {
	
	const int MAX = 5;
	int vetor[MAX];
	int i, j, temp;
	
	for (i = 0; i < MAX; i++) {
		printf ("| Informe o elemento %d do vetor: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	
	for (i = 0; i < MAX-1; i++) {
		for (j = i+1; j < MAX; j++) {
			if (vetor[i] < vetor[j]) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
	
	printf ("|---------------------------------\n| VETOR EM ORDEM DECRESCENTE \n| ");
	for (i = 0; i < MAX; i++) {
		printf ("%d ", vetor[i]);
	}
	
	return 0;
}
