//PROJETO FINAL

#include <stdio.h>
#include <string.h>

int main (void) {

	/* Declarando as variáveis */

	int num;

	printf ("BEM-VINDO(A) AO SISTEMA DE NOSSO CONSULTÓRIO!\n\n");
	printf ("1 - Cadastro\n2 - Consulta de Dados\n3 - Agendamento de Consultas\n\nDigite o número da operação correspondente que deseja realizar: ");
	scanf("%d",&num);

	if (num != 1 && num!= 2 && num != 3) {
		printf ("Nenhuma das opções foi selecionada.\nATÉ A PRÓXIMA!\n");
	}
	
	/* CADASTRO */

	else if (num == 1) {
		printf ("Opção 1 selecionada!\n");

	}

	else if (num == 2) {
		printf ("Opção 2 selecionada!\n");
	}
	
	else if (num == 3) {
		printf ("Opção 3 selecionada!\n");
	}

	return 0;
}
