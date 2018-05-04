//04.c

#include <stdio.h>	
int main () {
	float velocidade;
	float milha = 1.6;
	float kph;
	float mph;
	printf ("Qual a velocidade do carro em mph?");
	scanf ("%f",&mph);
	if (80<=velocidade && velocidade<=100) {
		velocidade = mph*milha;
		scanf ("%f",&velocidade);
		printf ("MANTENHA. A velocidade do carro em Km é: %f\n",velocidade);
	} else if (velocidade < 80) {
		printf ("ACELERE. A velocidade do carro em Km é: %f\n",velocidade);
	} else {
		printf ("DESACELERE. A velocidade do carro em Km é: %f\n",velocidade);
	}
	return 0;
}
