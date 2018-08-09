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
		
	FILE *f = fopen("/tmp/cadastro.bin", "a+b"); //Por que não está acrescentando ao arquivo?

	fwrite(&p.nome, sizeof(char), strlen(p.nome), f);
	fwrite(&p.n.dia, sizeof(int), 1, f);
	fwrite(&p.n.mes, sizeof(int), 1, f);
	fwrite(&p.n.ano, sizeof(int), 1, f);
	fwrite(&p.peso, sizeof(int), 1, f);
	fwrite(&p.altura, sizeof(int), 1, f);
	fwrite(&p.medico, sizeof(char), strlen(p.medico), f);
	fwrite(&p.mes_ult_con, sizeof(char), strlen(p.mes_ult_con), f);
	fwrite(&p, sizeof(struct Pessoa), 1, f);

	fread(&p.nome, sizeof(char), strlen(p.nome), f);
	fread(&p.n.dia, sizeof(int), 1, f);
	fread(&p.n.mes, sizeof(int), 1, f);
	fread(&p.n.ano, sizeof(int), 1, f);
	fread(&p.peso, sizeof(int), 1, f);
	fread(&p.altura, sizeof(int), 1, f);
	fread(&p.medico, sizeof(char), strlen(p.medico), f);
	fread(&p.mes_ult_con, sizeof(char), strlen(p.mes_ult_con), f);
	fread(&p, sizeof(struct Pessoa), 1, f);

	printf ("\nSEUS DADOS FORAM CADASTRADOS COM SUCESSO!\n");
	fclose(f);
	return p;
}
