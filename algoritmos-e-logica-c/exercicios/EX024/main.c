#include <stdio.h>
#include <stdlib.h>

// Média de Altura e Idade

int main() {
	
	int idade, pessoas;
	float soma_idade, media_idade;
	float altura, soma_altura, media_altura;
	
	pessoas = soma_idade = 0;
	soma_altura = 0;
	idade = -1;
	while (idade != 0) {
		printf ("-------------------------\n");
		printf ("| PESSOA %d \n", pessoas + 1);
		printf ("| Idade (0 - FIM): ");
		scanf ("%d", &idade);
		
		while (idade < 0) {
			printf ("| [!] Idade deve ser maior que 0: ");
			scanf ("%d", &idade);
		}
		
		if (idade != 0) {
			pessoas++;
			printf ("| Altura: ");
			scanf ("%f", &altura);
			
			while (altura <= 0) {
				printf ("| [!] Altura deve ser maior que 0: ");
				scanf ("%f", &altura);			
			}
			
			soma_idade += idade;
			soma_altura += altura;
		}
		else {
			printf ("| Encerrando Coleta de Dados...\n");
		}
	}
	
	printf ("-------------------------\n");
	if (pessoas <= 0) {
		printf ("| [!] Nenhum Dado Coletado");
	}
	else {
		media_idade = soma_idade / pessoas;
		media_altura = soma_altura / pessoas;
		printf ("| Pessoas: %d \n| Media Idade: %.2f \n| Media Altura: %.2f", pessoas, media_idade, media_altura);	
	}
	
	return 0;
}
