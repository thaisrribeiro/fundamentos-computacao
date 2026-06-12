#include <stdio.h>
#include <stdlib.h>

// Valor de Aumento e Novo Salário

int main() {
	
	int cargo;
	float salario, aumento, novo_salario;
	
	printf (" 1 - Servente \n 2 - Pedreiro \n 3 - Mestre de Obras \n 4 - Tecnico de Seguranca \n");
	printf ("--------------------------------\n");
	printf (" - Informe o cargo: ");
	scanf ("%d", &cargo);
	
	if (cargo < 1 || cargo > 4) {
		printf ("--------------------------------\n");
		printf (" [!] Cargo Invalido");
	}
	else {
		printf (" - Informe o salario: R$ ");
		scanf ("%f", &salario);
		
		if (salario <= 0) {
			printf ("--------------------------------\n");
			printf (" [!] O salario deve ser maior que 0.");
		}
		else {
			printf ("--------------------------------\n");
			switch (cargo) {
				case 1:
					aumento = 40;
					novo_salario = salario * (aumento/100 + 1);
					printf ("| Cargo: Servente \n| Aumento: 40%% \n| Novo Salario: R$ %.2f", novo_salario);
				break;
				case 2:
					aumento = 35;
					novo_salario = salario * (aumento/100 + 1);
					printf ("| Cargo: Pedreiro \n| Aumento: 35%% \n| Novo Salario: R$ %.2f", novo_salario);
				break;
				case 3:
					aumento = 20;
					novo_salario = salario * (aumento/100 + 1);
					printf ("| Cargo: Mestre de Obras \n| Aumento: 20%% \n| Novo Salario: R$ %.2f", novo_salario);
				break;
				case 4:
					aumento = 10;
					novo_salario = salario * (aumento/100 + 1);
					printf ("| Cargo: Tecnico de Seguranca \n| Aumento: 10% \n| Novo Salario: R$ %.2f", novo_salario);
				break;
			}	
		}
	}
	
	return 0;
}
