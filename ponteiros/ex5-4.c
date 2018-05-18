//troca.c

#include <stdio.h>

void troca (int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;  
}

int main () { 
	int x;
	int y;
	printf ("Digite um valor p1: ");
	scanf ("%d", &x);
	printf ("Digite um valor p2: ");
	scanf ("%d", &y);
	troca(&x,&y);
	printf("%d %d\n", x, y);
  
  return 0;
}
