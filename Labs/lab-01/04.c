//04.c

#include <stdio.h>	
int main () {
	float velocidade;
	float kph;
	float mph;
	printf ("Qual a velocidade do carro em mph? ");
	scanf ("%f",&mph);
	velocidade = mph*1.6;
	printf ("A velocidade do carro em Km/h é: %.2f\n", velocidade);	
	if (80<=velocidade && velocidade<=100) {
		printf ("MANTENHA.");
	} else if (velocidade < 80) { 
		printf ("ACELERE.");
	} else {
		printf ("DESACELERE.");
	}
	return 0;
}
