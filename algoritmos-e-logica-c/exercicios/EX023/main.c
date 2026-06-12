#include <stdio.h>
#include <stdlib.h>

// Média de Salário, Filhos e Maior Salário

int main() {
	
	int filhos, familias;
	float soma_fil, media_fil;
	float salario, soma_sal, media_sal, maior_sal;
	
	salario = soma_sal, maior_sal = 0;
	soma_fil = familias = 0;
	while (salario != -1) {
		printf ("--------------------------------\n");
		printf ("| FAMILIA %d \n", familias+1);		
		printf ("| Salario (-1 - FIM): ");
		scanf ("%f", &salario);
		
		while (salario < -1) {
			printf ("| [!] Salario deve ser positivo (-1 - FIM): ");
			scanf ("%f", &salario);
		}
		
		if (salario != -1) {
			familias++;
			printf ("| Quantidade de filhos: ");
			scanf ("%d", &filhos);
			
			while (filhos < 0) {
				printf ("| [!] Quantidade de filhos deve ser maior ou igual a 0: ");
				scanf ("%d", &filhos);
			}
			
			soma_fil += filhos;
			soma_sal += salario;
			if (salario > maior_sal) {
				maior_sal = salario;
			}
		}
		else {
			printf ("| Encerrando Coleta de Dados...\n");
		}	
	}
	
	if (familias <= 0) {
		printf ("--------------------------------\n");
		printf ("| [!] Nenhum Dado Coletado");
	}
	else {
		media_fil = soma_fil / familias;
		media_sal = soma_sal / familias;
		printf ("--------------------------------\n");
		printf ("| Familias: %d \n| Media Filhos: %.2f \n| Media Salario: R$ %.2f \n| Maior Salario: R$ %.2f", familias, media_fil, media_sal, maior_sal);
	}
	return 0;
}
