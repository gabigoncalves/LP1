//Exercício 4

#include <stdio.h>


void preenche (int* vec, int n){
	int i;
	for (i = 0 ; i < n ; i++) {
		printf("Digite um número: ");
		scanf("%d", &vec[i]);
	}			
}


int media (int* vec, int n){
	int soma = 0;
	int i;
	float media;
	for (i = 0 ; i < n ; i++) {
		soma = soma + vec[i];
	}
	media = (soma / n);
	return media;
}

int main(void){
	int n=3;
	int vec[n];
	float m;
	preenche(vec,n);
        m = media(vec,n);
	printf("A média é: %.2f\n", m);	 
	return 0;
}
