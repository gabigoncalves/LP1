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
	int media;
	int soma = 0;

  	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			soma = soma + arr[i][j];
		}
	}
	media = soma/4;
	return media;
}

int main () {
	int arr_int[2][2], i, j;
	preenche(arr_int);
	int media_arr = media(arr_int);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("arr_int[%d][%d]= %d \n", i, j, arr_int[i][j]);
		}
	}
	printf ("Média: %d\n", media_arr);
	return 0;
}
