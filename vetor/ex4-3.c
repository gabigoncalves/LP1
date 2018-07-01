#include <stdio.h>
#include <math.h>

struct Ponto {
	int x;
	int y;
};

void preenche_ponto (struct Ponto* ponto) {
	printf ("Digite o ponto x: ");
	scanf ("%d", &(*ponto).x);
	printf ("Digite o ponto y: ");
	scanf ("%d", &(*ponto).y);
}

void preenche_vetor (struct Ponto ps[]) {
	int i;
	for (i=0; i<9; i++) {
		struct Ponto p;
		preenche_ponto(&p);
		ps[i] = p;
	}	
}

struct Ponto ponto_distante (struct Ponto ps[10]) {
	int i;
	float maior = 0;
	float distancia;
	struct Ponto maior_ponto;
	for (i=0; i<9; i++) {
		distancia = sqrt(pow(ps[i].x - 0,2) + pow(ps[i].y - 0,2));
		if (distancia > maior) {
			maior_ponto.x = ps[i].x;
			maior_ponto.y = ps[i].y;
			maior = distancia; 
		}
	}
	return maior_ponto;
}

int main (void) {
	int i;
	struct Ponto maior_ponto;
	struct Ponto ps[10];
	preenche_vetor(ps);
	
	for (i=0; i<9; i++) {
		maior_ponto = ponto_distante(ps);
	}
	printf ("\nPonto mais distante de (0,0) é: (%d,%d)\n", maior_ponto.x, maior_ponto.y); 
	return 0;
}
