#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Leitura de Número Inteiro e Cálculo de Seu Quadrado e Raiz Quadrada

int main() {
	
	float num, quad, raiz;
	
	printf ("Informe um numero: ");
	scanf ("%f", &num);
	
	quad = num * num;
	raiz = sqrt(num);
	
	printf ("--------------------------------\n");
	printf ("Quadrado: %.2f | Raiz: %.2f", quad, raiz);
		
	return 0;
}
