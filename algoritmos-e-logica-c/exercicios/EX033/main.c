#include <stdio.h>
#include <stdlib.h>

// Quantidade de Pessoas Casadas, Solteiras, Separadas e Viúvas + Média de Idade e Peso

int main() {
	
	int est_civ;
	int pessoas, cas, sol, sep, viu;
	int idade, soma_ida, media_ida;
	float peso, soma_pes, media_pes;
	char gen [20];
	
	idade = -1;
	cas = sol = sep = viu = pessoas = 0;
	soma_ida = soma_pes = 0;
	while (idade != 0) {
		printf ("| Idade (0 - FIM): ");
		scanf ("%d", &idade);
		
		while (idade < 0) {
			printf ("| [!] Idade deve ser maior que 0! : ");
			scanf ("%d", &idade);
		}
		
		if (idade == 0) {
			printf ("| Encerrando Coleta de Dados...\n");
		}
		else {
			pessoas++;
			printf ("| Peso: ");
			scanf ("%f", &peso);
			
			while (peso <= 0) {
				printf ("| [!] Peso deve ser positivo! : ");
				scanf ("%f", &peso);
			}
			
			printf ("| Genero: ");
			scanf (" %[^\n]", gen);
			printf ("| 1 - Pessoa Casada \n| 2 - Pessoa Solteira \n| 3 - Pessoa Separada \n| 4 - Pessoa Viuva");
			printf ("\n|========================\n| Selecione o Estado Civil: ");
			scanf ("%d", &est_civ);
			
			while (est_civ < 1 || est_civ > 4) {
				printf ("| [!] Opcao Invalida! Tente Novamente: ");
				scanf ("%d", &est_civ);
			}
			
			switch (est_civ) {
				case 1: cas++; break;
				case 2: sol++; break;
				case 3: sep++; break;
				case 4: viu++; break;
			}
			
			soma_ida += idade;
			soma_pes += peso;
		}
		printf ("\n---------------------------------\n\n");
	}
	
	if (pessoas < 1) {
		printf ("| [!] Nenhum Dado Coletado.\n");
	}
	else {
		media_ida = soma_ida / pessoas;
		media_pes = soma_pes / pessoas;
		printf ("| COLETA DE DADOS FINALIZADA!\n");
		printf ("| Media Idade: %d \n| Media Peso: %.2f\n", media_ida, media_pes);
		printf ("|========================\n");
		printf ("| PESSOAS \n| - Casadas: %d \n| - Solteiras: %d \n| - Separadas: %d \n| - Viuvas: %d \n", cas, sol, sep, viu);
	}
	
	return 0;
}
