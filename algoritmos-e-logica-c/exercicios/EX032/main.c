#include <stdio.h>
#include <stdlib.h>

// Número de Pedidos e Total da Compra

int main() {
	
	float valor, total;
	char data [11]; 
	int num, qtd;
	float preco_uni;
	
	num = -1;
	total = 0;
	while (num != 0) {
		
		printf ("| Numero do pedido (0 - FIM): ");
		scanf ("%d", &num);
		
		while (num < 0) {
			printf ("| [!] Numero do Pedido deve ser Positivo! : ");
			scanf ("%d", &num);
		}
		
		if (num == 0) {
			printf ("| Encerrando Coleta de Dados... \n");
		}
		else {
			printf ("| Data (d/m/a): ");
			scanf ("%s", data);
			printf ("| Preco Unitario: R$ ");
			scanf ("%f", &preco_uni);

			while (preco_uni < 0.01) {
				printf ("| [!] Preco deve ser Positivo! : R$ ");
				scanf ("%f", &preco_uni);
			}			
			
			printf ("| Quantidade: ");
			scanf ("%d", &qtd);
			
			while (qtd < 1) {
				printf ("| [!] Quantidade deve ser Maior que 0! : ");
				scanf ("%d", &qtd);
			}
			
			valor = qtd * preco_uni;
			total += valor;
		}
		printf ("\n--------------------------------\n\n");
	}
	printf ("| COMPRA FINALIZADA!\n");
	printf ("| Total: R$ %.2f", total);
	
	return 0;
}
