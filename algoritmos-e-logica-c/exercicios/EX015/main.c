#include <stdio.h>
#include <stdlib.h>

// Calendário

int main() {
	
	int num;
	
	printf ("Informe o numero do mes: ");
	scanf ("%d", &num);
	printf ("--------------------------------\n");
	
	switch (num) {
		case 1: 
			printf (" Mes %d | Janeiro", num);
		break;
		case 2: 
			printf (" Mes %d | Fevereiro", num);
		break;
		case 3: 
			printf (" Mes %d | Marco", num);
		break;
		case 4: 
			printf (" Mes %d | Abril", num);
		break;
		case 5: 
			printf (" Mes %d | Maio", num);
		break;
		case 6: 
			printf (" Mes %d | Junho", num);
		break;
		case 7: 
			printf (" Mes %d | Julho", num);
		break;
		case 8: 
			printf (" Mes %d | Agosto", num);
		break;
		case 9: 
			printf (" Mes %d | Setembro", num);
		break;
		case 10: 
			printf (" Mes %d | Outubro", num);
		break;
		case 11: 
			printf (" Mes %d | Novembro", num);
		break;
		case 12: 
			printf (" Mes %d | Dezembro", num);
		break;
		default: printf (" [!] Mes Invalido");		
	}
	
	return 0;
}
