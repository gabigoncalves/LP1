#include <stdio.h>

void preenche (int arr[2][2]) {
	int i, j;
	int num;
  
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf ("Insira um valor para arr[%d][%d]: ", i, j);
			scanf ("%d", &num);
			arr[i][j] = num;
		}
	}
}

int media(int arr[2][2]){
	int i, j;
	float media = 0;
	float soma = 0;

  for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			soma = soma + arr[i][j];
		}
	}
	media = soma/4;
	printf ("Média: %.2f\n", media);
	return media;
}

int main () {
	int arr[2][2];
	preenche(arr);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("arr[%d][%d]= %d \n", i, j, arr[i][j]);
		}
	}
	media(arr)
	return 0;
}
