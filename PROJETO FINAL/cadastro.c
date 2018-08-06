//Cadastro

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Nascimento {
	int dia;
	int mes;
	int ano;
};

struct Pessoa {
	char nome [30];
	int idade;
	float peso;
	float altura;
	char medico [30];
	char mes_ult_con[10];
	struct Nascimento n;
};

void preenche_data (struct Nascimento* n) {

	printf ("Agora você irá digitar a data de seu nascimento.\nDia: ");
	scanf ("%d",&((*n).dia));
	printf ("Mês: ");
	scanf ("%d",&((*n).mes));
	printf ("Ano: ");
	scanf ("%d",&((*n).ano));
}

void preenche_dados (struct Pessoa* p) {

	printf ("Digite seu nome: ");
	scanf ("%s",(*p).nome);
	printf ("Insira a seu peso: ");
	scanf ("%f",&((*p).peso));
	printf ("Insira a sua altura: ");
	scanf ("%f",&((*p).altura));
	printf ("Insira o nome do seu médico: ");
	scanf ("%s",(*p).medico);
	printf ("Qual o mês de sua última consulta? ");
	scanf ("%s",(*p).mes_ult_con);
	preenche_data(&(*p).n);
}

struct Pessoa cadastro (void) {

	struct Pessoa p;
	preenche_dados(&p);
		
	FILE *f = fopen("/tmp/cadastro.txt", "a");

	fprintf(f, "Nome: %s\r\n", p.nome);
	fprintf(f, "Nascimento: %d/%d/%d\r\n", p.n.dia, p.n.mes, p.n.ano);
	fprintf(f, "Peso: %.2fKg\r\n", p.peso);
	fprintf(f, "Altura: %.2fm\r\n", p.altura);
	fprintf(f, "Nome do médico: %s\r\n", p.medico);
	fprintf(f, "Mês da última consulta: %s\r\n\n\n", p.mes_ult_con);
	
	printf ("\nSEUS DADOS FORAM CADASTRADOS COM SUCESSO!\n ");

/*	printf ("\nNome: %s\nData de Nascimento: %d/%d/%d\nPeso: %.2fKg\nAltura: %.2fm\nNome do médico: %s\nMês da última consulta: %s\n\n", p.nome, p.n.dia, p.n.mes, p.n.ano, p.peso, p.altura, p.medico, p.mes_ult_con);
*/	
	fclose(f);
	return p;
}
