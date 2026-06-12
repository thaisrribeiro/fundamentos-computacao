#include <stdio.h>
#include <stdlib.h>

// Somatório dos Números Pares até um Número N Informado pelo Usuário
int somatorio (int num);

int main() {
	
	int numero, resultado;
	printf ("| Informe um numero: ");
	scanf ("%d", &numero);
	
	while (numero <= 0) {
		printf ("| \a[!] O numero deve ser maior que 0: ");
		scanf ("%d", &numero);
	}
	
	resultado = somatorio(numero);
	printf ("|-------------------------------\n");
	printf ("| O somatorio dos numeros pares ate %d equivale a %d. \n", numero, resultado);
	return 0;
	
}

int somatorio (int num) {
	
	int soma, i;
	soma = 0;
	for (i = 0; i <= num; i+=2) {
		soma += i;
	}
	return soma;
	
}
