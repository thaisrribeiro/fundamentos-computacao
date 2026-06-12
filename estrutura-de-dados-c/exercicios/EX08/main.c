#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Uso de Vetor Dinâmico e Cálculo de Potências

int main() {
	
	int x, i;
	int *ponteiro1 = NULL, *ponteiro2 = NULL;
	
	printf ("| Informe o tamanho do vetor: ");
	scanf ("%d", &x);
	
	ponteiro1 = (int*) malloc (sizeof(int)*x);
	ponteiro2 = (int*) malloc (sizeof(int)*x*2);
	
	if (ponteiro1 == NULL || ponteiro2 == NULL) {
		printf ("\n| Erro: Memória Insuficiente");
		free (ponteiro1);
		free (ponteiro2);
	}
	else {
			printf ("|-----------------------------\n| Ponteiro 1:");
			for (i = 0; i < x; i++) {
				ponteiro1[i] = (int) pow(2, i);
				printf (" %d", ponteiro1[i]);
			}
			printf ("\n|-----------------------------\n| Ponteiro 2:");
			for (i = 0; i < x*2; i++) {
				ponteiro2[i] = (int) pow(3, i);
				printf (" %d", ponteiro2[i]);
			}
		free (ponteiro1);
		free (ponteiro2);
		ponteiro1 = NULL;
		ponteiro2 = NULL;	
	}
	
	return 0;
}
