#include <stdio.h>
#include <stdlib.h>

// Dois números inteiros e a soma do intervalo entre eles
int somaIntervalo (int a, int b);

int main() {
	
	int n1, n2, soma;
	printf ("| Informe o primeiro numero: ");
	scanf ("%d", &n1);
	
	while (n1 < 0) {
		printf ("| [!] O numero deve ser positivo: ");
		scanf ("%d", &n1);
	}
	
	printf ("| Informe o segundo numero: ");
	scanf ("%d", &n2);
	
	while (n2 < 0) {
		printf ("| [!] O numero deve ser positivo: ");
		scanf ("%d", &n2);	
	}
	
	soma = somaIntervalo(n1, n2);
	printf ("|------------------------------\n");
	printf ("| A soma do intervalo entre %d e %d equivale a %d", n1, n2, soma);
	printf ("\n");
	return 0;
	
}

int somaIntervalo (int a, int b) {
	int i, maior, menor, soma = 0;
	if (a > b) {
		maior = a;
		menor = b;
	}
	else {
		maior = b;
		menor = a;
	}
	for (i = menor+1; i < maior; i++) {
		soma += i;
	}
	return (soma);
}
