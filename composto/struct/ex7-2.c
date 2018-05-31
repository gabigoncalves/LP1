//Exercício 7.2

#include <stdio.h>
#include <string.h>

struct Servicos {
	float hospedagem;
	float limpeza;
	float comida;
};

struct Hotel {
	char nome_hotel[20];
	int gasto;
	struct Servicos servico;
};

void preenche (struct Servicos* servico) {
	printf ("Digite a sua avalicao (com notas de 0 a 5) para os servicos abaixo.\n");
	printf ("Servico de quarto: ");
	scanf ("%f",&(*servico).hospedagem);
	printf ("Limpeza do hotel: ");
	scanf ("%f",&(*servico).limpeza);
	printf ("Comida e cardapio: ");
	scanf ("%f",&(*servico).comida);
}

void preenche2 (struct Hotel* h) {
	printf ("Insira o nome do hotel em que voce se hospedou: ");
	scanf ("%s",(*h).nome_hotel);
	printf ("Insira o gasto aproximado de sua viagem: R$");
	scanf ("%d",&((*h).gasto));
	preenche (&(*h).servico);
}

int main (void) {
	struct Hotel h;
	preenche2 (&h);
	printf ("\nNome do Hotel: %s\nGasto: R$%d\n\nAvaliacao do(a) cliente para os servicos oferecidos: \nHospedagem: %.2f\nLimpeza: %.2f\nComida: %.2f\n", h.nome_hotel, h.gasto, h.servico.hospedagem, h.servico.limpeza, h.servico.comida);
	return 0;
}
