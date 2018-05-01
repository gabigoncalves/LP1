//Ler dois números n1 e n2 e exibir todos os números entre eles

#include <stdio.h>
int main () {
    int n1;
    int n2;
    printf ("Escolha um número n1:");
    scanf ("%d",&n1);
    printf ("Escolha um número n2:");
    scanf ("%d",&n2);
    if (n1 > n2) {
        for i in range (n1,n2) {
            printf ("Os números entre",n1," e ",n2,"são: %d\n", i)
        }
    } 		
    else {
        for i in range (n2,n1) {
            Printf ("Os números entre",n2," e ",n1,"são: %d\n", i)
        }
    }
    retun 0;
}
