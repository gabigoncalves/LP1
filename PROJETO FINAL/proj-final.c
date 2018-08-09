//PROJETO FINAL

#include <stdio.h>
#include <string.h>

#include "cadastro.c"

int main (void) {

	int num;

	struct Pessoa pessoas[100];
	int pessoa_i = 2;

	while (1) {
		printf ("==================================================================\n");
		printf ("\nBEM-VINDO(A) AO SISTEMA DE NOSSO CONSULTÓRIO!\n\n");
		printf ("1 - Cadastro\n");
		printf ("2 - Consulta de Dados\n");
		printf ("3 - Agendamento de Consultas\n");
		printf ("4 - Sair de nosso sistema\n\n");
		printf ("Digite o número da operação correspondente que deseja realizar: ");
		scanf("%d",&num);

		if (num != 1 && num!= 2 && num != 3 && num != 4) {
			printf ("\nOPS!\nNenhuma das opções foi selecionada... TENTE NOVAMENTE!\n\n");
		}
	
		/* Cadastro */

		else if (num == 1) {
			printf ("\nOpção 1 selecionada!\n\n");
			printf ("---------------------------- CADASTRO ----------------------------\n\n");
			struct Pessoa p = cadastro();
			pessoas[pessoa_i] = p;
			pessoa_i++;
		}

		/* Consulta de Dados */

		else if (num == 2) {
			printf ("\nOpção 2 selecionada!\n\n");
			printf ("----------------------- CONSULTA DE DADOS -----------------------\n\n");

			struct Pessoa p;
			FILE* f = fopen ("/tmp/cadastro.bin", "rb");

			printf ("Nome: %s\n", p.nome);
			printf ("Nascimento:: %d/%d/%d\n", p.n.dia, p.n.mes, p.n.ano);
			printf ("Altura: %.2fm\n", p.altura);
			printf ("Peso: %.2fKg\n", p.peso);
			printf ("Nome do(a) médico(a): %s\n", p.medico);
			printf ("Mês da última consulta: %s\n\n", p.mes_ult_con);

		}

		/* Agendamento de Consultas */

		else if (num == 3) {
			printf ("\nOpção 3 selecionada!\n\n");
			printf ("-------------------------- AGENDAMENTO --------------------------\n\n");

			int n;

			printf ("Abaixo você pode verificar os nomes dos(as) médicos(as) que atendem\nem nosso consultório: \n\n");
			printf ("Amarildo Batista da Costa \nAmanda Silva Medeiros \nBruna Lisboa Moreira \nBenedito Rui Barbosa \nEmerson Farias Reis \nHeloísa Maria Junqueira \nMario Hungaro Kross \nOlívia Ribeiro Cunha \nRicardo Oliveira Mundi \nVivian Santana Cruz\n\n");
			printf ("Digite 1 se quiser ver informações dos médicos. ");
			scanf ("%d",&n);
	
			if (n != 1) {
				printf ("\nNúmero digitado não corresponde ao comando acima.\n\n");
			}
	
			else {
				if (n == 1) {
				char url[]="/tmp/medico.txt", info[1000];
				FILE *g;
	
				g = fopen(url, "r");
					while( (fgets(info, sizeof(info), g))!=NULL) {
						printf("%s", info);
					}
				fclose(g);
				}
			}
		}

		else if (num == 4) {
			printf ("\nOpção 4 selecionada!\n\n");
			printf ("========================== VOLTE SEMPRE! ==========================\n\n");
			exit(4);
		}
	}
	return 0;
}
