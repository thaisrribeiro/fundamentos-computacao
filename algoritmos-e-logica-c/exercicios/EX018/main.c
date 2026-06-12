#include <stdio.h>
#include <stdlib.h>

// Quantidade de Pares e Ímpares até que o Valor 0 seja Informado

int main() {
	
	int num, imp, par;
	imp = 0;
	par = 0;
	
	do {
		printf ("Informe um numero (0 - Finalizar): ");
		scanf ("%d", &num);
		if (num % 2 == 0 && num != 0) {
			par++;
		}
		else if (num != 0) {
			imp++;
		}
	} while (num != 0);
	
	printf ("--------------------------------\n");	
	printf (" Pares: %d | Impares: %d", par, imp);
	
	return 0;
}
