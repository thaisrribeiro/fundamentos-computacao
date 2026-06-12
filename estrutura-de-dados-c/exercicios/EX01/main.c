#include <stdio.h>
#include <stdlib.h>

// Introdução aos Ponteiros

int main() {
	
	int x;
	int *ponteiro;
	
	x = 5;
	ponteiro = &x;
	
	printf ("| Valor de X: %d", x);
	printf ("\n| Endereco de X: %p", &x);
	printf ("\n| Valor de X por ponteiro: %d", *ponteiro);
	printf ("\n| Endereco de X armazenado no ponteiro: %p", ponteiro);
		
	return 0;
}
