#include <stdio.h>
#include <stdlib.h>

// Vetor Ordenado em Ordem Crescente

void ordenarVetor (int *vetor, int tamanho);
void receberVetor (int *vetor, int tamanho);

int main() {
	
	const int MAX = 10;
	int vetor[MAX];
	receberVetor(vetor, MAX);
	ordenarVetor(vetor, MAX);
	printf ("\n");
	return 0;
	
}

void ordenarVetor (int *vetor, int tamanho) {
	int i, j, temp;
	for (i = 0; i < tamanho-1; i++) {
		for (j = i+1; j < tamanho; j++) {
			if (vetor[i] > vetor[j]) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
	printf ("\n|-------------------------------\n| VETOR ORDENADO:");
	for (i = 0; i < tamanho; i++) {
		printf (" %d", vetor[i]);
	}
}

void receberVetor (int *vetor, int tamanho) {
	int i;
	printf ("| RECEBER VETOR \n|-------------------------------\n");
	for (i = 0; i < tamanho; i++) {
		printf ("| - Elemento %d: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	printf ("|-------------------------------\n| VETOR RECEBIDO:");
	for (i = 0; i < tamanho; i++) {
		printf (" %d", vetor[i]);
	}
}
