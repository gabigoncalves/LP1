//04.c

#include <stdio.h>	
int main () {
	float velocidade;
	float milha = 1.6;
	float kph;
	float mph;
	printf ("Qual a velocidade do carro em mph?");
	scanf ("%f",&mph);
	velocidade = mph*milha;
	if (80<velocidade && velocidade<100) {
		printf ("Mantenha");
	} else if (velocidade < 80) {
		printf ("Acelere");
	} else {
		printf ("Desacelere");
	}
	return 0;
}
