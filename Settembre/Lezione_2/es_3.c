#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    float lato1, lato2;
    float lato3;

    printf("\nInserisci il primo lato del rettangolo: ");
    scanf("%f", &lato1);

    printf("\nInserisci il secondo lato del rettangolo: ");
    scanf("%f", &lato2);

    lato3 = sqrt(pow(lato1, 2) + pow(lato2, 2));

    printf("Il terzo lato del rettangolo vale: %.2f\n", lato3);

    return 0;
}