#include <stdio.h>
#include <string.h>

int strlen2 (char* string) {
	int i = 0;
	int cont = 0;
	while (string[i] != '\0') {
		cont = cont + 1;
		i++;
	}
	return cont;
}

void strjoin (char s1[], char s2[], char s3[]) {
	char s1 = 'abc';
	char s2 = 'def';
}

int main (void) {
	char string[20];
	printf ("Digite uma string:");
	scanf ("%s", string);
	int tamanho = strlen2 (string);
	printf ("Quantidade de caracteres: %d\n", tamanho);
	return 0;
}

