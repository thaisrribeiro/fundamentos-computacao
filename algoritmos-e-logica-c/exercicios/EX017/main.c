#include <stdio.h>
#include <stdlib.h>

// Peso da Carga, Valor do Imposto e Valor Total da Carga

int main() {
	
	int cod_estado, cod_carga;
	float peso, preco, imposto, taxa_imp, preco_quilo, total;
	
	printf (" - Informe o codigo do Estado: ");
	scanf ("%d", &cod_estado);
	
	if (cod_estado < 1 || cod_estado > 4) {
		printf ("--------------------------------\n");
		printf (" [!] Codigo Invalido");
	}
	else {
		
		switch (cod_estado) {
			case 1: taxa_imp = 0.20; break;
			case 2: taxa_imp = 0.15; break;
			case 3: taxa_imp = 0.10; break;
			case 4: taxa_imp = 0.05; break;
		}
		
		printf (" - Informe o peso da carga (toneladas): ");
		scanf ("%f", &peso);
		
		if (peso <= 0) {
			printf ("--------------------------------\n");
			printf (" [!] Peso deve ser maior que 0");
		}
		else {
			printf (" - Informe o codigo da carga: ");
			scanf ("%d", &cod_carga);
			
			if (cod_carga < 10 || cod_carga > 40) {
				printf ("--------------------------------\n");
				printf (" [!] Codigo Invalido");
			}
			else {
				if (cod_carga >= 10 && cod_carga <= 20) {
					preco_quilo = 180;
				}
				else if (cod_carga >= 21 && cod_carga <= 30) {
					preco_quilo = 120;
				}
				else if (cod_carga <= 31 && cod_carga <= 40) {
					preco_quilo = 230;
				}
				
				imposto = (peso * 1000) * preco_quilo * taxa_imp;
				preco = (peso * 1000) * preco_quilo;
				total = preco + imposto;
				
				printf ("--------------------------------\n");				
				printf ("| Peso em Quilos: %.2f \n| Preco: R$ %.2f \n| Imposto: R$ %.2f \n| Total: R$ %.2f", peso * 1000, preco, imposto, total);
			}
		}
	}
	
	return 0;
}
