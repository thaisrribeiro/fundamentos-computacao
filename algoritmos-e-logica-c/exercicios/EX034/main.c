#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Área Total de uma Residência

int main() {
	
	float largura, comprimento, area, total;
	char comodo[30] = "";
	
	area = total = 0;
	while (strcmp (comodo, "fim") != 0 && strcmp (comodo, "FIM") != 0) {
		printf ("| Comodo: ");
		scanf(" %[^\n]", comodo);
		
		if (strcmp (comodo, "fim") != 0 && strcmp (comodo, "FIM") != 0) {
			printf ("| Largura: ");
			scanf ("%f", &largura);
			
			while (largura <= 0) {
				printf ("| [!] Largura deve ser maior que 0! : ");
				scanf ("%f", &largura);
			}
			
			printf ("| Comprimento: ");
			scanf ("%f", &comprimento);
			
			while (comprimento <= 0) {
				printf ("| [!] Comprimento deve ser maior que 0! : ");
				scanf ("%f", &comprimento);
			}
			
			area = largura * comprimento;
			total += area;
		}
		else {
			printf ("| Encerrando Coleta de Dados...\n");
		}
		printf ("------------------------------\n");
	} 
	
	if (total > 0) {
		printf ("| CALCULO REALIZADO COM SUCESSO! \n");
		printf ("| Area Total: %.2f", total);
	}
	else {
		printf ("| [!] Nenhum Dado Coletado.");
	}
	
	return 0;
}
