/*Dato il perimetro e due lati di un triangolo, 
scrivere un programma che calcoli la lunghezza 
del terzo lato e ne stampi a video il risultato.

ESEMPIO DI ESECUZIONE

Perimetro:12
Primo lato:3
Secondo lato:4
Terzo lato:5*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    float perimetro, lato1, lato2, lato3;

    printf("Perimetro:");
    scanf("%f", &perimetro);

    printf("Primo lato:");
    scanf("%f", &lato1);

    printf("Secondo lato:");
    scanf("%f", &lato2);

    lato3 = perimetro - lato1 - lato2;
    
    if (lato3 == (int)lato3) {
        printf("Terzo lato:%.0f\n", lato3);
    } else {
        printf("Terzo lato:%.2f\n", lato3);
    }

    return 0;
}