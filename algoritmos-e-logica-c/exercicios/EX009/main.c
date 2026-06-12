#include <stdio.h>
#include <stdlib.h>

// Verificação se o Número é Divisível por 5

int main() {
	
	int num;
	
	printf ("Informe um numero: ");
	scanf ("%d", &num);
	printf ("--------------------------------\n");
	
	if (num % 5 == 0) {
		printf ("%d e divisivel por 5.", num);
	}
	else {
		printf ("%d NAO e divisivel por 5.", num);
	}
	
	return 0;
}
