#include <stdio.h>
#include <stdlib.h>

// Números Divisíveis por 3 e por 7 que são menores que 30;

int main() {
	
	int i;
	
	printf ("========== NUMEROS DIVISIVEIS POR 3 (<30) ==========\n\n|");
	for (i = 3; i < 30; i += 3) {
		printf (" %d", i);
	}
	
	printf ("\n\n========== NUMEROS DIVISIVEIS POR 7 (<30) ==========\n\n|");
	for (i = 7; i < 30; i += 7) {
		printf (" %d", i);
	}
	
	return 0;
}
