#include <stdio.h>
#include <stdlib.h>

// Função de Verificação: Número Positivo ou Negativo

void verificarNum (int n);

int main() {
	
	int numero;
	printf ("| NUMERO POSITIVO OU NEGATIVO?\n");
	printf ("|---------------------------------\n");
	printf ("| - Informe um numero: ");
	scanf ("%d", &numero);
	printf ("|---------------------------------\n");
	verificarNum(numero);
	printf ("\n");
	return 0;
}

void verificarNum (int n) {
	if (n < 0) {
		printf ("| %d = Negativo", n);
	}
	else if (n > 0){
		printf ("| %d = Positivo", n);
	}
	else {
		printf ("| %d = Neutro", n);
	}
}
