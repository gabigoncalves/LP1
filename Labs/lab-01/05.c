//05.c

#include <stdio.h>

int main () {
	int num;
	int soma;
	printf ("Digite um número: ");
	scanf ("%d", &num);

	while (num != 0) 
	{
		printf ("Digite um número: ");
		scanf ("%d", &num);
		soma = soma + num
	} 
	printf ("Número 0 foi digitado. A soma de todos os números lidos foi: %d\n", soma);
	return 0;
}
