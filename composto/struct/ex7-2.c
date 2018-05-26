//Exercício 7.2

#include <stdio.h>
#include <string.h>

struct Nomes {
	char seu_nome[15];
	char nome_hotel[20];
};
	
struct Numeros {
	int gasto;
	int pontuacao;
	struct Nomes nome;
};

void preenche (struct Nomes* nome) {
	printf ("Digite seu primeiro nome: ");
	scanf ("%s",(*nome).seu_nome);
	printf ("Insira o nome do hotel em que você se hospedou: ");
	scanf ("%s",(*nome).nome_hotel);
}

void preenche2 (struct Numeros* num) {
	printf ("Insira o gasto aproximado de sua viagem: R$");
	scanf ("%d",&((*num).gasto));
	printf ("De 0 a 5, qual a sua satisfação? ");
	scanf ("%d",&((*num).pontuacao));
}

int main (void) {
	struct Nomes nome;
	preenche(&nome);
	struct Numeros num;
	preenche2(&num);
	strcpy( num.nome.seu_nome, "Luiz Miguel");
	strcpy( num.nome.nome_hotel, "Copacabana Palace");
	num.gasto = 5000;	
	num.pontuacao = 5;

	printf( "\nSeu nome: %s\n", num.nome.seu_nome);
	printf( "Nome do Hotel: %s\n", num.nome.nome_hotel);
	printf( "Gasto: %d\n", num.gasto);
	printf( "Pontuaçao: %d\n\n", num.pontuacao);
	
	return 0;
}
