#include <stdio.h>
#include <string.h>

struct Posicao {
	int x;
	int y;
};

struct Personagem {
	char imagem[1];
	int pontuacao;
	struct Posicao posicao;
};

void leia_posicao (struct Posicao* posicao) {
	printf ("Posição (x,y): ");
	scanf ("%d,%d", &((*posicao).x), &((*posicao).y));
}

void leia (struct Personagem* p) {
	int i;
	printf ("Imagem do personagem: ");
	scanf ("%s", (*p).imagem);
	(*p).pontuacao = 0;
	leia_posicao(&(*p).posicao);
}

int main (void) {
	int i;
	struct Personagem personagens[4];

	for (i=0; i<4; i++) {
		struct Personagem personagem;
		leia(&personagem);
		personagens[i] = personagem;
		printf ("\nPersonagem: %s\nPosição: (%d,%d)\nPontuação: %d\n\n", personagem.imagem, personagem.posicao.x, personagem.posicao.y, personagem.pontuacao);
	}
	
	return 0;
}
