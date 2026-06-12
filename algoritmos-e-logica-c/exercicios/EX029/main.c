#include <stdio.h>
#include <stdlib.h>

// Soma de todos os números inteiros ímpares entre 200 e 500

int main() {
	
	int i, soma;
	
	printf ("-------- NUMEROS IMPARES ENTRE 200 e 500 --------\n");
	for (i = 199; i <= 500; i += 2) {
		if (i > 200) {
			printf ("%d ", i);
			soma += i;
		}
	}
	
	printf ("\n-------------------------------------------------\n");
	printf ("| A Soma dos numeros acima equivale a: %d", soma);
	
	return 0;
}
