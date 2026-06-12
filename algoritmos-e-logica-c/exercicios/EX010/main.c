#include <stdio.h>
#include <stdlib.h>

// Nome, Idade e Mensalidade do Plano de Saúde

int main() {
	
	char nome[50];
	int idade;
	
	printf ("Informe o nome: ");
	scanf ("%s", nome);
	printf ("Informe a idade: ");
	scanf ("%d", &idade);
	
	printf ("--------------------------------\n");
	printf (" - Nome: %s | Idade: %d \n", nome, idade);
	printf ("--------------------------------\n");
	
	if (idade < 0) {
		printf (" - [!] Idade Invalida.");
	}
		else if (idade <= 18) {
			printf (" - Mensalidade : R$50");
		}
			else if (idade <= 29) {
				printf (" - Mensalidade : R$70");
			}
				else if (idade <= 45) {
					printf (" - Mensalidade : R$90");
				}
					else if (idade <= 65) {
						printf (" - Mensalidade : R$130");
					}
						else {
							printf (" - Mensalidade : R$170");
						}
	
	return 0;
}
