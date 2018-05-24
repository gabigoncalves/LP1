#include <stdio.h>

void preenche(int* vec, int n) {
	int i;
	for (int i = 0; i < n; i++) {
		printf("Digite um número: ");
		scanf("%d", vec+i);
    }
}

int media(int* vec, int n) {
	int soma = 0;
	float media = 0;
	int i;
	for (int i = 0; i < n; i++) {
		soma = soma + *(vec+i);
	}
	media=soma/n;
	return media;
}

int main (void) {
	int i;
	int n;
	int vec[n];
	float m;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	preenche(vec, n);
	m = media(vec, n);

	for(int i=0; i < n; i++) {
		printf("Vetor: %d\n", *(vec+i));
	}
	printf("A média é: %.2f\n", m);
	return 0;
}
