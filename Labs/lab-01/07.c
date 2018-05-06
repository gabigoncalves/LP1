//07.c

#include <stdio.h>
#include <string.h>

int main () {
	int num_vit = 0;
	int num_emp = 0;
	int num_der = 0;
	int pontos;
	int i;
	int mais_pontos = 0;
	int menos_pontos = 1000;
	char nome[10];
	char nome_melhor[10];
	char nome_pior[10];

	for (i=0; i < 20; i++) {
		printf ("Digite o nome do time: ");
		scanf ("%s", nome);
		printf ("Digite o número de vitórias desse time: ");
		scanf ("%d", &num_vit);
		printf ("Digite o número de empates: ");
		scanf ("%d", &num_emp);
		printf ("Digite o número de derrotas: ");
		scanf ("%d", &num_der);
		pontos = (num_vit*3) + (num_emp*1);
		
		if  (pontos > mais_pontos) {
			mais_pontos = pontos;
			strcpy(nome_melhor, nome);
		}
		else if (pontos < menos_pontos) {
			menos_pontos = pontos;
			strcpy(nome_pior, nome);
		}
	}
	printf ("O time com menos pontos é: %s. ",nome_pior);
	printf ("A quantidade de pontos foi: %d\n",menos_pontos);
	printf ("O time com mais pontos é: %s. ",nome_melhor);
	printf ("A quantidade de pontos foi: %d\n",mais_pontos);
	return 0;
}
