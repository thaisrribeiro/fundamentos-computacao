#include <stdio.h>
#include <stdlib.h>

// Número Primo

int main() {
	
	int num, i, div;
	
	printf (" - Informe um numero: ");
	scanf ("%d", &num);
	
	while (num < 1) {
		printf ("---------------------------------\n");
		printf (" [!] O numero deve ser maior que 0.\n");
		printf ("---------------------------------\n");
		printf (" - Informe um numero: ");
		scanf ("%d", &num);
	}
	
	div = 0;
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			div++;
		}
	}
	
	printf ("---------------------------------\n");
	if (div == 2) {
		printf (" - %d e primo", num);
	}
	else {
		printf (" - %d NAO e primo", num);
	}
	
	return 0;
}
