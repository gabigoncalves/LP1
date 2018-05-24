//Exercício 7.1

#include <stdio.h>
#include <string.h>

struct BancodeDados {
	char seu_nome[10];
	char nome_hotel[20];
	int gasto;
	float pontuacao;
};

void preenche (struct BancodeDados* bd) {
	printf ("Digite seu primeiro nome: ");
	scanf ("%s",(*bd).seu_nome);
	printf ("Insira o nome do hotel em que você se hospedou: ");
	scanf ("%s",(*bd).nome_hotel);
	printf ("Insira o gasto aproximado de sua viagem: R$");
	scanf ("%d",&((*bd).gasto));
	printf ("De 0 a 5, qual a sua satisfação? ");
	scanf ("%f",&((*bd).pontuacao));
}

int main (void) {
	struct BancodeDados bd;
	preenche (&bd);
	printf ("\nSeu nome: %s\nHotel: %s\nGasto: R$%d\nPontuação: %.1f\n\n", bd.seu_nome, bd.nome_hotel, bd.gasto, bd.pontuacao);
	return 0;
}
