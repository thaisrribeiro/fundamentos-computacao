#include <stdio.h>
#include <stdlib.h>

// Atribuindo Valor a X por meio de Ponteiro

int main() {
	
	int x;
	int *ponteiro;
	
	x = 128;
	ponteiro = &x;
	
	printf ("| Valor X: %d \n| Valor pelo Ponteiro: %d", x, *ponteiro);
	printf ("\n|----------------------------------------------\n");
	
	*ponteiro = 256;
	printf ("| Valor X: %d \n| Valor pelo Ponteiro: %d", x, *ponteiro);
	
	return 0;
}
