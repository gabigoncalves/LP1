//07.c

#include <stdio.h>

int main () {
	int times = 3;
	int vit = 3;
	int emp = 1;
	int der = 0;
	int num_vit = 0;
	int num_emp = 0;
	int num_der = 0;
	int i = 0;
	int pontos;
	int pontos_pior;
	int pontos_melhor;
	char nome;
	char nome_pior;
	char nome_melhor;

	for (i; i < times; i++) {
		printf ("Digite o nome do time: ");
		scanf ("%c", &nome);
		printf ("Digite o número de vitórias desse time: ");
		scanf ("%d", &num_vit);
		printf ("Digite o número de empates: ");
		scanf ("%d", &num_emp);
		printf ("Digite o número de derrotas: ");
		scanf ("%d", &num_der);
		pontos = (num_vit*vit) + (num_emp*emp) + der;
	}
	if  (pontos <= 1) {
		nome_pior = nome;
		pontos_pior = pontos;
	}
	else if (pontos > 3) {
		nome_melhor = nome;
		pontos_melhor = pontos;
	}
	printf ("O time com menos pontos é: %c\n",nome_pior);
	printf ("A quantidade de pontos foi: %d\n",pontos_pior);
	printf ("O time com mais pontos é: %c\n",nome_melhor);
	printf ("A quantidade de pontos foi: %d\n",pontos_melhor);
	i = i + 1;
	return 0;
}
