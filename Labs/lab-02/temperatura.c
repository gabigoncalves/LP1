//temperatura.c

#include <stdio.h>
int main () {
	char temp[50];
	int t;	
	int i;
	int soma_temp = 0;
	int media;
	int soma_media = 0;

	for (i=0; i< 50; i++) {
		printf ("Insira a temperatura: \n");
		scanf ("%d", &t);
		temp[i] = t;
		soma_temp = soma_temp + temp[i];
	}
	printf ("A soma das temperaturas é: %d\n", soma_temp);	
	media = soma_temp/50;
	printf ("A média das temperaturas é: %d\n", media);

	for (i=0; i< 50; i++) {
		if (temp[i] > media) {
			printf ("As temperaturas acima da média são: %d\n", temp[i]);
			soma_media = soma_media + 1;
		}
	}
	printf ("A quantidade de temperaturas acima da média é: %d\n", soma_media);
	return 0;
}
