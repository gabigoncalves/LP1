// 01-oi.c
#include <stdio.h>

int main (void) {
    int n1, n2
    printf ("Escolha um número n1:");
    scanf ("%d",&n1);
    printf ("Escolha um número n2:");
    scanf ("%d",&n2);
    
    if (n1>n2) {
        printf ("O maior valor lido foi:","%d",&n1);
    }
    else {
        printf ("O maior valor lido foi:","%d",&n2);
    }
    return 0;
}
