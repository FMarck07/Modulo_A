#include <stdio.h>

/*Scrivere un programma C che legga da tastiera i valori interi di m e q
come coefficienti dell’equazione di una retta (y=mx+q), e successivamente il valore di x, 
e restituisca il valore di y in quel punto.

ESEMPIO DI ESECUZIONE

m=3
q=2
x=5
y=17*/

int main(int argc, char *argv[]) {
    int m, q, x, y;

    printf("m=");
    scanf("%d", &m);

    printf("q=");
    scanf("%d", &q);

    printf("x=");
    scanf("%d", &x);
    y = m*x+q;
    printf("y=%d", y);


    return 0;
}
