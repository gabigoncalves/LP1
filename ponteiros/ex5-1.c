//exercício 5.1

#include <stdio.h>

int main () {

	int a;
	int b;
	int* p;
	printf ("Digite um valor para a: ");
	scanf ("%d", &a);
	printf ("Digite um valor para b: ");
	scanf ("%d", &b);
	printf ("O valor de a é %d e o valor de b é %d\n", a, b);
	
	if (a > b) {
		p = &a;
	}	
	else {
		p = &b;
	}

	*p = *p - 50;
	printf ("O valor de a é %d e o valor de b é %d\n", a, b);

	return 0;
}

