#include <stdio.h>
#include <stdlib.h>

// Leitura de um Número Inteiro e Impressão de seu Antecessor e Sucessor

int main() {
	
	int n;
	printf ("Informe um numero: ");
	scanf ("%d", &n);
	printf ("----------------------------------------\n");
	printf ("Antecessor: %d | Numero: %d | Sucessor: %d \n", n-1, n, n+1);
	
	return 0;
}
