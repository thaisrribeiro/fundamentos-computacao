#include <stdio.h>
#include <stdlib.h>

// Quantidade Total de Calorias

int main() {
	
	int prato, bebida, total, opcao;
	
	prato = 0;
	bebida = 0;
	
	printf (" 1 - Italiano (750cal) \n 2 - Japones (324cal) \n 3 - Salvadorenho (545cal) \n");
	printf ("--------------------------------\n");
	printf (" - Escolha um prato: ");
	scanf ("%d", &opcao);
	printf ("--------------------------------\n");
	
	switch (opcao) {
		case 1: prato = 750; break;
		case 2: prato = 324; break;
		case 3: prato = 545; break;
		default:
		printf (" [!] Nenhum Prato Escolhido\n");
		printf ("--------------------------------\n");
	}
	
	printf (" 1 - Cha (30cal) \n 2 - Suco de Laranja (80cal) \n 3- Refrigerante (90cal) \n");
	printf ("--------------------------------\n");
	printf (" - Escolha uma bebida: ");
	scanf ("%d", &opcao);
	printf ("--------------------------------\n");
	
	switch (opcao) {
		case 1: bebida = 30; break;
		case 2: bebida = 80; break;
		case 3: bebida = 90; break;
		default:
		printf (" [!] Nenhuma Bebida Escolhida\n");
		printf ("--------------------------------\n");
	}
	
	total = prato + bebida;
	printf (" - Total de Calorias: %d", total);
	
	return 0;
}
