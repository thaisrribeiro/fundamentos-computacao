#include <stdio.h>
#include <stdlib.h>

// Média, Maior, Menor, Pares e Ímpares.

int main() {
	
	int num = -1;
	int soma, media;
	int maior, menor;
	int pares, impares, qtd;
	
	soma = qtd = 0;
	maior = menor = 0;
	pares = impares = 0;
	while (num != 0) {
		printf ("\n--------------------------------\n\n");
		printf ("| Informe um numero (0 - FIM): ");
		scanf ("%d", &num);
		
		if (num == 0) {
			printf ("| Encerrando...\n\n");
		}
		else {
			qtd++;
			soma += num;
			
			if (num > maior) {
				maior = num;
				if (menor == 0) {
					menor = num;
				}
			}
			else if (num < menor) {
				menor = num;
			}
			
			if (num % 2 == 0) {
				pares++;
			}
			else {
				impares++;
			}
		}
	}
	
	printf ("--------------------------------\n\n");
	if (qtd > 0) {
		media = soma / qtd;
		printf ("| Media: %d \n| Maior: %d \n| Menor: %d \n| Pares: %d \n| Impares: %d \n", media, maior, menor, pares, impares);
	}
	else {
		printf ("| [!] Nenhum dado coletado.\n");
	}
	return 0;
}
