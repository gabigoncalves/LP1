#include <stdio.h>
#include <string.h>

int main (void) {
  char string[25];
  int i;
  int tamanho;
  
  printf ("Digite uma string: ");
  scanf ("%s", string);
  tamanho = strlen(string);

  FILE* f = fopen ("/tmp/arq8-1.txt", "w");

  for (i = 0; i < tamanho; i++) {
    fputc (string[i], f);
  }
  fclose(f);
  return 0;
}
	
