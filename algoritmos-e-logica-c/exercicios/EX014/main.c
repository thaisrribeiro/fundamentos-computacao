#include <stdio.h>
#include <stdlib.h>

// Número Divisível por 3 ou 7

int main() {
	
	int num;
	
	printf ("Informe um numero: ");
	scanf ("%d", &num);
	printf ("--------------------------------\n");
	
	if (num % 3 == 0 && num % 7 == 0) {
		printf ("%d e divisivel por 3 e 7.", num);
	}
	else {
		printf ("%d NAO e divisivel por 3 e 7.", num);
	}
	
	return 0;
}
