#include <stdio.h>
#include <stdlib.h>

// Valor de S

int main() {
	
	int n, i;
	float s;
	
	printf ("| Expressao: S = 1 + 1/2 + ... 1/n \n");
	printf ("| Informe o valor de n: ");
	scanf ("%d", &n);
	
	s = 0;
	for (i = 1; i <= n; i++) {
		s += 1.0/i;
	}
	
	printf ("--------------------------------\n");
	printf ("| Valor de S: %.2f", s);
	
	return 0;
}
