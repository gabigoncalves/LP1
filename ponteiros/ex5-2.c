//exercício 5.2

#include <stdio.h>

void compra (int* conta, int valor) {
	
	*conta = *conta - valor;
}	
	

int main () {

	int minha_conta1;
	int minha_conta2;
	int* conta;

	printf ("Digite o saldo da conta 1: R$ ");
	scanf ("%d", &minha_conta1);	
	printf ("Digite o saldo da conta 2: R$ ");
	scanf ("%d", &minha_conta2);
	
	if (minha_conta1 > minha_conta2) {
		conta = &minha_conta1;
	}
	else {
		conta = &minha_conta2;
	}
	compra(conta, 500);
	printf ("O saldo da conta 1 é R$%d e o da conta 2 é R$%d\n", minha_conta1, minha_conta2);
	return 0;
}
