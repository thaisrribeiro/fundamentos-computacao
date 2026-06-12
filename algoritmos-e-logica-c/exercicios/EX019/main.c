#include <stdio.h>
#include <stdlib.h>

// Fechamento de Notas de uma Turma

int main() {
	
	int cod, qtd_notas, i;
	float nota, soma_nota, media;
	int aprovados, reprovados;
	
	printf (" - Quantidade de notas da disciplina: ");
	scanf ("%d", &qtd_notas);
	
	while (qtd_notas <= 0) {
		printf ("--------------------------------\n");
		printf (" [!] Quantidade de notas deve ser maior que 0.\n");
		printf ("--------------------------------\n");
		printf (" - Quantidade de notas da disciplina: ");
		scanf ("%d", &qtd_notas);
	}
	
	cod = -1;
	aprovados = reprovados = 0;
	while (cod != 0) {
		printf ("--------------------------------\n");
		printf ("| Codigo de estudante (0 - FIM): ");
		scanf ("%d", &cod);
		
		soma_nota = 0;
		if (cod != 0) {
			for (i = 0; i < qtd_notas; i++) {
				printf ("| Nota %d: ", i+1);
				scanf ("%f", &nota);
				soma_nota = soma_nota + nota;
			}
			media = soma_nota / qtd_notas;
			
			printf ("| Estudante: %d | Media: %.2f | Status: ", cod, media); 
			if (media >= 6) {
				aprovados++;
				printf ("APROVADO\n");
			}
			else {
				reprovados++;
				printf ("REPROVADO\n");
			}
		}
		else {
			printf ("--------------------------------\n");
			printf (" - Encerrando o programa...\n");
		}
		
	}
	
	printf ("--------------------------------\n");
	printf (" Aprovados: %d | Reprovados: %d", aprovados, reprovados);
	
	return 0;
}
