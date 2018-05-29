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

void preenche2 (struct Numeros* n) {
	printf ("Digite seu primeiro nome: ");
	scanf ("%s",(*n).nome.seu_nome);
	printf ("Insira o nome do hotel em que você se hospedou: ");
	scanf ("%s",(*n).nome.nome_hotel);
	printf ("Insira o gasto aproximado de sua viagem: R$");
	scanf ("%d",&((*n).gasto));
	printf ("De 0 a 5, qual a sua satisfação? ");
	scanf ("%d",&((*n).pontuacao));
}

int main (void) {
	struct Numeros n;
	preenche2(&n);

	printf( "\nSeu nome: %s\n", n.nome.seu_nome);
	printf( "Nome do Hotel: %s\n", n.nome.nome_hotel);
	printf( "Gasto: R$%d\n",n.gasto);
	printf( "Pontuaçao: %d\n\n", n.pontuacao);
	
	return 0;
}
