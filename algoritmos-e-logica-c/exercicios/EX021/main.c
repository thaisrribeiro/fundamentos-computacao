#include <stdio.h>
#include <stdlib.h>

// Números Naturais Divisíveis por 3 e Menores que 100

int main() {
	
	int i;
	
	for (i = 0; i <= 100; i+=3) {
		printf ("%d ", i);
	}
	
	return 0;
}
