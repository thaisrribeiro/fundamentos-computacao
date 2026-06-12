#include <stdio.h>
#include <stdlib.h>

// Conversão de Quilogramas para Libras

float converterPeso (float q); 

int main() {
	
	float quilogramas, libras;
	printf ("| CONVERSAO: \n| QUILOGRAMAS(KG) -> LIBRAS (LB)\n");
	printf ("|-------------------------------\n");
	printf ("| - Peso (KG): ");
	scanf ("%f", &quilogramas);
	
	while (quilogramas <= 0) {
		printf ("|-------------------------------\n");
		printf ("| [!] \a Peso deve ser maior que zero!\n");
		printf ("| Peso (KG): ");
		scanf ("%f", &quilogramas);
	}
	
	libras = converterPeso(quilogramas);
	printf ("|-------------------------------\n");
	printf ("| %.2f KG = %.2f LB", quilogramas, libras);
	
	return 0;
}

float converterPeso (float q) {
	float peso;
	peso = q * 2.2046;
	return peso;
}
