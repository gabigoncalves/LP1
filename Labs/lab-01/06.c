//06.c

#include <stdio.h>

int main () {
    int n;
    int i;
    int soma;
    printf ("Escreva um número: ");
    scanf ("%d",&n);
    soma = 0;
    for (i=1; i<=n; i++) {
        soma = soma + i*i;
        printf ("O somatório é: %d\n",soma);
    }
    return 0;
} 
