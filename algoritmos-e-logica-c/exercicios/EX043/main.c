#include <stdio.h>
#include <stdlib.h>

// Quantidade de Elementos Diferentes entre Dois Vetores

int main() {
	
	const int MAX = 5;
	int vetorA[MAX];
	int vetorB[MAX];
	int qtd, i;
	
	qtd = 0;
	for (i = 0; i < MAX; i++) {
		printf ("| Informe o elemento %d do vetor A: ", i+1);
		scanf ("%d", &vetorA[i]);
	}
	printf ("|-----------------------------------\n");	
	for (i = 0; i < MAX; i++) {
		printf ("| Informe o elemento %d do vetor B: ", i+1);
		scanf ("%d", &vetorB[i]);
	}
	printf ("|-----------------------------------\n");	
	for (i = 0; i < MAX; i++) {
		if (vetorA[i] != vetorB[i]) {
			qtd++;
		}
	}

	if (qtd > 0) {
		printf("| Quantidade de posicoes diferentes: %d\n", qtd);
	}
	else {
		printf ("| Os Vetores sao Iguais.");
	}
	return 0;
}
