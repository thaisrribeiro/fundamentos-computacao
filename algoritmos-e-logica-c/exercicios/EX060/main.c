#include <stdio.h>
#include <stdlib.h>

// Conversão de Real para Dólar
float converterMoeda(float real, float cotacao);

int main() {
	
	float real, cotacao, dolar;
	printf ("| Informe a cotacao do dolar: ");
	scanf ("%f", &cotacao);
	
	while (cotacao <= 0) {
		printf ("| \a[!] O valor deve ser positivo: ");
		scanf ("%f", &cotacao);
	}	
	
	printf ("| Informe o valor em reais: ");
	scanf ("%f", &real);
	
	while (real <= 0) {
		printf ("| \a[!] O valor deve ser positivo: ");
		scanf ("%f", &real);
	}
	
	dolar = converterMoeda(real, cotacao);
	printf ("|-------------------------------\n");
	printf ("| CONVERSAO: $%.2f  = R$ %.2f \n", dolar, real);
	return 0;

}

float converterMoeda(float real, float cotacao) {
	
	float total;
	total = real / cotacao;
	return total;
	
}
