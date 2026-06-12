#include <stdio.h>
#include <stdlib.h>

// Conversão de Celsius para Fahrenheit

float converterTemp (float c);

int main() {
	
	float celsius, fahrenheit;
	
	printf ("| Temperatura em Celsius: ");
	scanf ("%f", &celsius);
	fahrenheit = converterTemp (celsius);
	printf ("|-------------------------------\n");
	printf ("| %.1f graus Celsius = %.1f graus Fahrenheit", celsius, fahrenheit);
	return 0;
}

float converterTemp (float c) {
	float f;
	f = c * 1.8 + 32;
	return f;
}
