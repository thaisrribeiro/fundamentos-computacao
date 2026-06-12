#include <stdio.h>
#include <stdlib.h>

// Pesquisa de Satisfação dos Clientes

int main() {
	
	int sat, ind, insat, clientes, opiniao;
	int idade, soma, media;
	
	printf ("=============== AVALIACAO ===============\n\n");
	idade = -1;
	soma = media = 0;
	sat = ind = sat = clientes = 0;
	while (idade != 0) {
		printf ("| Informe a idade (0 - FIM): ");
		scanf ("%d", &idade);
		
		while (idade < 0) {
			printf ("| [!] A idade deve ser maior que zero: ");
			scanf ("%d", &idade);
		}
		
		if (idade == 0) {
			printf ("| Encerrando Pesquisa...\n");
		}
		else {
			clientes++;
			printf ("| 1 - Satisfatorio \n| 2 - Indiferente \n| 3 - Insatisfatorio \n| --------------------------\n");
			printf ("| Escolha uma opcao: ");
			scanf ("%d", &opiniao);
			
			while (opiniao < 1 || opiniao > 3) {
				printf ("| [!] Opcao Invalida! Tente Novamente: ");
				scanf ("%d", &opiniao);
			}
			
			switch (opiniao) {
				case 1:
					sat++; 
					soma += idade; // O comando pede somente a média dos clientes satisfeitos.
				break;
				case 2: ind++; break; // Adaptado para que os clientes com opinião indiferente também sejam contabilizados.
				case 3: insat++; break;
			}		
			printf ("\n=========================================\n\n");
		}
	}	
	
	printf ("\n=============== RESULTADO ===============\n\n");
	if (clientes > 0) {
		media = soma / sat;
		printf ("| Satisfeitos: %d \n| Indiferentes: %d \n| Insatisfeitos: %d \n", sat, ind, insat);
		printf ("| Media Idade (Satisfeitos): %d", media);
	}
	else {
		printf ("| [!] Nenhum Dado Coletado.");
	}
	return 0;
}
