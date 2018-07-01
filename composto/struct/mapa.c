#include <stdio.h>
#include <string.h>

#define L 10
#define C 10

struct Posicao {
	int x;
	int y;
};

struct Personagem {
	int imagem;
	int pontuacao;
	struct Posicao posicao;
};

void leia_posicao (struct Posicao* posicao) {
	printf ("PosiC'C#o (x,y): ");
	scanf ("%d,%d", &((*posicao).x), &((*posicao).y));
}

void leia (struct Personagem* p) {
	printf ("Imagem do personagem: ");
	scanf ("%d", (*p).imagem);
	(*p).pontuacao = 0;
	leia_posicao(&(*p).posicao);
}

int main() {
	int i,j;
    int mat[L][C] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };
	
	
	struct Personagem personagens[10];
	for (i=0; i<L; i++) {
		leia(&personagens[i]);
		mat[personagens[i].posicao.x][personagens[i].posicao.y] = personagens[i].imagem;
	}

	printf("  ");
	for (j=0; j<C; j++) {
		printf("%d", j);
	}
	printf("\n");
	for (i=0; i<L; i++) {
		printf("%d", i);
		for (j=0; j<C; j++) {
			if (mat[i][j] == 0) {
				printf("* ");
			}
			else {
				printf("%d", mat[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
