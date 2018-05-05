//07.c

#include <stdio.h>

int main () {
	int times = 20;
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
	char[20] nome;
	char[20] nome_pior;
	char[20] nome_melhor;

	while (i < times) {
	printf ("Digite o nome do time: \n");
	scanf ("%d", &nome);
	printf ("Digite o número de vitórias desse time: \n");
	scanf ("%d", &num_vit);
	printf ("Digite o número de empates: \n");
	scanf ("%d", &num_emp);
	printf ("Digite o número de derrotas: \n");
	scanf ("%d", &num_der);
	pontos = (num_vit*vit) + (num_emp*emp) + der;
	
	if  ((pontos < 1) or (pontos == 1)) {
		nome_pior = nome;
		pontos_pior = pontos
	}
	if (pontos > 3) {
		nome_melhor = nome;
		pontos_melhor = pontos;
	}
	printf ("O time com menos pontos é: %d. Possui: %d\n",&nome_pior,&pontos_pior);
	printf ("O time com mais pontos é: %d. Possui: %d\n",&nome_melhor,&pontos_melhor);
	i = i + 1;
	return 0;
}
