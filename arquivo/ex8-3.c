#include <stdio.h>
#include <string.h>

int main(void){
	char vet[2][5];
	int i;
	int j;
	int tamanho;

	for(i = 0; i < 2; i++) {
		printf("Digite a string: ");
		scanf("%s", vet[i]);
	}

	FILE* f = fopen("/tmp/ex8-3.txt", "w");

	for(i = 0; i < 2; i++) {
		tamanho = strlen(vet[i]);
		for(j = 0; j < tamanho; j++) {
			fputc(vet[i][j], f);
		}
	fprintf (f, "\n");
	}

	fclose(f);
	return 0;
}
