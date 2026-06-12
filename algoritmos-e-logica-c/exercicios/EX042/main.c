#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cadastro e Consulta de Informações de Funcionários (ADAPTADA)

struct ficha {
	int matricula;
	char nome [50];
	char setor [30];
	float salario;
};

int main() {
	
	const int MAX = 5;
	struct ficha funcionarios[MAX];
	int menu = 0;
	int qtd_func, mat, busca, i, indice;
	
	qtd_func = 0;
	while (menu != 3) {
		printf ("| 1 - Cadastrar Funcionario \n| 2 - Consultar Funcionario \n| 3 - Sair");
		printf ("\n|-----------------------------\n| - Informe a operacao: ");
		scanf ("%d", &menu);
		
		while (menu < 1 || menu > 3) {
			printf ("|-----------------------------\n");
			printf ("| [!] Operacao Invalida. \n| - Tente Novamente: ");
			scanf ("%d", &menu);
		}
		printf ("|-----------------------------\n");
		switch (menu) {
			case 1:
				if (qtd_func == MAX) {
					printf ("| [!] Quantidade Maxima de Funcionarios Atingida.\n");
				}
				else {
					printf ("| CADASTRO - USUARIO %d", qtd_func+1);
					printf ("\n| - Matricula: ");
					scanf ("%d", &funcionarios[qtd_func].matricula);
					
					while (funcionarios[qtd_func].matricula < 1) {
						printf ("|-----------------------------\n");
						printf ("| [!] Matricula deve ser Positiva. \n| - Tente Novamente: ");
						scanf ("%d", &funcionarios[qtd_func].matricula);
						printf ("|-----------------------------\n");
					}
					while (getchar() != '\n');
					
					printf ("| - Nome: ");
					gets (funcionarios[qtd_func].nome);
					printf ("| - Setor: ");
					gets (funcionarios[qtd_func].setor);
					printf ("| - Salario: ");
					scanf ("%f", &funcionarios[qtd_func].salario);
					while (funcionarios[qtd_func].salario < 1) {
						printf ("|-----------------------------\n");
						printf ("| [!] Salario deve ser Positivo. \n| - Tente Novamente: ");
						scanf ("%f", &funcionarios[qtd_func].salario);
					}
					printf ("|-----------------------------\n");
					printf ("| FUNCIONARIO CADASTRADO! \n");
					qtd_func++;
				}
			break;
			case 2:
				if (qtd_func < 1) {
					printf ("| [!] Nenhum Funcionario Cadastrado.\n");
				}
				else {
					printf ("| CONSULTA \n| - Matricula: ");
					scanf ("%d", &mat);
					while (getchar() != '\n');
					busca = 0;
					
					for (i = 0; i < qtd_func; i++) {
						if (mat == funcionarios[i].matricula) {
							busca = 1;
							indice = i;
							break;
						}
					}
					printf ("|-----------------------------\n");
					if (busca == 1) {
						printf ("| FUNCIONARIO ENCONTRADO!");
						printf ("\n| - Matricula: %d", funcionarios[indice].matricula);
						printf ("\n| - Nome: %s", funcionarios[indice].nome);
						printf ("\n| - Setor: %s", funcionarios[indice].setor);
						printf ("\n| - Salario: R$ %.2f\n", funcionarios[indice].salario);
					}
					else {
						printf ("| [!] NENHUM FUNCIONARIO ENCONTRADO \n");
					}
				}
			break;
			case 3:
				printf ("| Encerrando Programa...\n");
			break;
		}
		printf ("|-----------------------------\n");
	}
	return 0;
}
