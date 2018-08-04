#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, char* str){
	tamanho = strlen(str);
	for(int i = 0; i < tamanho; i++){
		fputc(str[i], f);
	}
}

int main(void){
    char string[25];

    FILE* f = fopen ("ex8-4.txt", "w");
    printf("Digite a string: ");
    scanf("%s", string);

    escreva_string(f, string);

    fclose(f);
    return 0;
}
