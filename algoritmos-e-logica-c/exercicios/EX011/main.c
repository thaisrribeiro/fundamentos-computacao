#include <stdio.h>
#include <stdlib.h>

// Classe Eleitoral

int main() {
	
	int idade;
	
	printf ("Informe a idade: ");
	scanf ("%d", &idade);
	
	printf ("--------------------------------\n");
	
	if (idade < 0) {
		printf ("- [!] Idade Invalida");
	}
		else if (idade < 16) {
			printf (" - Nao Eleitor");
		}
			else if (idade < 18 || idade > 65 ) {
				printf (" - Eleitor Facultativo");
			}
				else {
					printf (" - Eleitor Obrigatorio");
				}
	
	return 0;
}
