//06.c

#include <stdio.h>

int main () {
	int n;
	int soma;
	int i;
	printf ("Escreva um número: ");
	scanf ("%d",&n);	
	soma = 0;
	i = 1;

	for (i; i <= n; i++) 
	{
		soma = soma + (i*i);
	}
	printf ("O somatório é: %d\n",soma);
	return 0;
}
