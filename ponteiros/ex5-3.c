//Exercício 5.3

#include <stdio.h>

void compra (int* conta, int valor) {
	*conta = *conta - valor;
}		

int main () {

	int minha_conta1;
	int minha_conta2;
	int* conta;
	int compras[] = {100, 50, 80, 30, 20};
	int x;

	printf ("Digite o saldo da conta 1: R$ ");
	scanf ("%d", &minha_conta1);	
	printf ("Digite o saldo da conta 2: R$ ");
	scanf ("%d", &minha_conta2);
	
	for (x = 0; x < 5; x++) {

		if (minha_conta1 > minha_conta2) {
			conta = &minha_conta1;
		}
		else {
			conta = &minha_conta2;
		}
	compra(conta, compras[x]);
	printf ("\nSabendo que o valor a ser descontado é: R$ %d\n",compras[x]);
	printf ("O saldo da conta 1 é R$%d e o da conta 2 é R$%d\n", minha_conta1, minha_conta2);
	}
	
	return 0;
}
