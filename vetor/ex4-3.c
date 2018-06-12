#include <stdio.h>
#include <math.h>

struct Ponto {
	int x;
	int y;
};

void preenche_ponto (struct Ponto* p) {
	printf ("Digite o ponto x: ");
	scanf ("%d", &(*p).x);
	printf ("Digite o ponto y: ");
	scanf ("%d", &(*p).y);
}

void preenche_vetor (struct Ponto* ps, int n) {
	int i;
	for (i=0; i<n; i++) {
		struct Ponto p;
		preenche_ponto(&p);
		ps[i] = p;
		printf ("Ponto: (%d,%d)\n", p.x, p.y);	
	}	
}

void ponto_distante () {

	//distancia = sqrt(pow((xb-xa),2)+pow((yb-ya),2));
}

int main (void) {
	struct Ponto ps[10];
	preenche_vetor(ps);
	struct Ponto p = ponto_distante(ps);
	return 0;
}
