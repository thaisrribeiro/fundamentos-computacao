#include <stdio.h>
#include <stdlib.h>

// Soma dos Vetores e Impressão em Ordem Crescente (ADAPTADA)

int main() {
	
	int vet1[3];
	int vet2[3];
	int vet3[3];
	int i, j, temp;
	
	for (i = 0; i < 3; i++) {
		printf ("| Informe o elemento %d do vetor 1: ", i+1);
		scanf ("%d", &vet1[i]);
	}
	
	printf ("|------------------------------------------\n");
	for (i = 0 ; i < 3; i++) {
		printf ("| Informe o elemento %d do vetor 2: ", i+1);
		scanf ("%d", &vet2[i]);
	}
	
	printf ("|------------------------------------------\n| Soma: ");
	for (i = 0; i < 3; i++) {
		vet3[i] = vet1[i] + vet2[i];
		printf ("%d ", vet3[i]);
	}
	for (i = 0; i < 3; i++) {
		for (j = i+1; j < 3; j++) {
			if (vet3[i] > vet3[j]) {
				temp = vet3[i];
				vet3[i] = vet3[j];
				vet3[j] = temp;
			}
		}
	}
	
	printf ("\n| Ordem Crescente: ");
	for (i = 0; i < 3; i++) {
		printf ("%d ", vet3[i]);
	}
	
	return 0;
}
