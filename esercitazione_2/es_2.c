#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float lato1, lato2, p;
    float lato3;

    printf("\nInserisci il perimetro del rettangolo: ");
    scanf("%f", &p);

    printf("\nInserisci il primo lato del rettangolo: ");
    scanf("%f", &lato1);

    printf("\nInserisci il secondo lato del rettangolo: ");
    scanf("%f", &lato2);

    lato3 = p - lato1 - lato2;

    printf("Il terzo lato del rettangolo vale: %.2f\n", lato3);

    return 0;
}