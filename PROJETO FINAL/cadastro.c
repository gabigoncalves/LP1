//Cadastro

#include <stdio.h>
#include <string.h>

struct Cadastro {
	char nome [30];
	int idade;
	float peso;
	float altura;
	char medico [30];
	char mes_ult_con[10];

	struct Data {
	int dia;
	int mes;
	int ano;
	} nascimento;
};


void preenche_dados (struct Cadastro* c) {

	printf ("Digite seu nome: ");
	scanf ("%s",(*c).nome);
	printf ("Insira a seu peso: ");
	scanf ("%f",&((*c).peso));
	printf ("Insira a sua altura: ");
	scanf ("%f",&((*c).altura));
	printf ("Insira o nome do seu médico: ");
	scanf ("%s",(*c).medico);
	printf ("Qual o mês de sua última consulta? ");
	scanf ("%s",(*c).mes_ult_con);
}

void preenche_data (struct Data* d) {

	printf ("Agora você irá digitar a data de seu nascimento.\nDia: ");
	scanf ("%d",&((*d).dia));
	printf ("Mês: ");
	scanf ("%d",&((*d).mes));
	printf ("Ano: ");
	scanf ("%d",&((*d).ano));
}

int main (void) {

	int diaA, mesA, anoA, idade;

	printf ("Por favor, informe a data de hoje (dd/mm/aaaa): ");
	scanf ("%d/%d/%d",&diaA, &mesA, &anoA);	

	struct Cadastro c;
	preenche_dados(&c);
	struct Data d;
	preenche_data(&d);

	/*Cálculo da Idade*/

	if ((d.mes)>mesA || ((d.mes)=mesA) && ((d.dia)>diaA)) {
		idade = anoA - (d.ano) -1;
	}
	else {
		idade = anoA - (d.ano);
	}	
	
	printf ("\nSEUS DADOS FORAM CADASTRADOS COM SUCESSO!\n ");
	printf ("\nNome: %s\nData de Nascimento: %d/%d/%d\nIdade: %d\nPeso: %.2fKg\nAltura: %.2fm\nNome do médico: %s\nMês da última consulta: %s\n\n", c.nome, d.dia, d.mes, d.ano, idade, c.peso, c.altura, c.medico, c.mes_ult_con);

	return 0;
}
