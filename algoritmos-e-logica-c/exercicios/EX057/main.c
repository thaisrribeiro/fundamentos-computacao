#include <stdio.h>
#include <stdlib.h>

// Retornar 0 se for Vogal e 1 se for Consoante, Número ou Caractere Especial
int verificar (char c);

int main() {
	
	char caractere;
	int resultado;
	printf ("| - Informe um caractere: ");
	scanf ("%c", &caractere);
	resultado = verificar(caractere);
	printf ("|--------------------------------\n");
	if (resultado == 0) {
		printf ("| O caractere '%c' e uma vogal!", caractere);
	}
	else {
		printf ("| O caractere '%c' e uma consoante, numero ou caractere especial!", caractere);
	}
	return 0;
}

int verificar (char c) {
	switch (c) {
		case 'a': return 0; break;
		case 'e': return 0; break;
		case 'i': return 0; break;
		case 'o': return 0; break;
		case 'u': return 0; break;
		case 'A': return 0; break;
		case 'E': return 0; break;
		case 'I': return 0; break;
		case 'O': return 0; break;
		case 'U': return 0; break;
		default: return 1;  
	}
}
