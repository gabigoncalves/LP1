//03.c

#include <stdio.h>
int main () {	
	int din = 1000;	
	float preco;
	float total;
	printf ("Digite o preço do celular em dólares: ");
	scanf ("%f",&preco);
	total = preco/3.17; 
	if (total <= din) {
		printf ("Bom negócio! O valor do celular é: R$%.2f\n", total);
 	}	
	else {
		printf ("Não é um bom negócio... O valor do celular é: R$%.2f\n", total);
	}
	return 0;
}
