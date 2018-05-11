//todos_os_primos.c

#include <stdio.h>

int eh_primo (int n) {
	int i;
	for (i=2; i<n; i++) {
		if (n%i == 0) {
			return (0);
		}
	}
	return (1);
}

int todos_os_primos (int max) {
	int x;
	for (x=1; x<=max; x++) {
		if (eh_primo(x)) {
			printf ("%d\n", x);
		}
	}
}

int main () {

	int max;
	
	printf ("Digite um numero: ");
	scanf ("%d", &max);
	printf ("Os primos entre 1 e %d sao: \n",max);
	todos_os_primos(max);
	return 0;
}
