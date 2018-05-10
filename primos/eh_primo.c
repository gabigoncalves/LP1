//eh_primo.c

#include <stdio.h>

int eh_primo (int n) {
	int i;
	for (i=2;i<n;i++) {
		if (n%i == 0) {
			return (0);
		}
	}
return (1);
}

int main () {
	int n;
	printf ("Digite um número: ");
	scanf ("%d",&n);
	
	if (eh_primo(n) == 0) {
		printf ("Não é primo! \n");
	}
	else {
		printf ("É primo! \n");
	}
	return 0;
}
