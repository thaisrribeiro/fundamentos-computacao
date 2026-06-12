#include <stdio.h>
#include <stdlib.h>

// Valor de Rendimento e Valor Total

int main() {
	
	float deposito, juros, taxajuros, rendimento, total;
	
	printf ("Informe o valor do deposito: ");
	scanf ("%f", &deposito);
	printf ("Informe o valor da taxa de juros: ");
	scanf ("%f", &juros);
	
	taxajuros = (juros / 100) + 1;
	total = deposito * taxajuros;
	rendimento = total - deposito;
	
	printf ("--------------------------------\n");
	printf (" - Rendimento : %.2f \n", rendimento);
	printf (" - Total: %.2f", total);
	
	return 0;
}
