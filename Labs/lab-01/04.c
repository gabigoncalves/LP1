//04.c

#include <stdio.h>	
int main () {
	float velocidade;
	float kph;
	float mph;
	printf ("Qual a velocidade do carro em mph? \n");
	scanf ("%f",&mph);
	velocidade = mph*1.6;
	printf ("A velocidade do carro em Km/h é: %.2f\n", velocidade);	
	if (80<=velocidade && velocidade<=100) {
		printf ("MANTENHA.\n");
	} else if (velocidade < 80) { 
		printf ("ACELERE.\n");
	} else {
		printf ("DESACELERE.\n");
	}
	return 0;
}

