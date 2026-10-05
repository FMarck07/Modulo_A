#include <stdio.h>

int main(int argc, char *argv[]) {
    float lato;
    int numero;
    float area_totale;

    printf("Lato piastrella:");
    scanf("%f", &lato);

    printf("Numero piastrelle:");
    scanf("%d", &numero);

    area_totale = lato * lato * numero;

    if (area_totale == (int)area_totale) {
        printf("Area totale:%.0f\n", area_totale);
    } else {
        printf("Area totale:%.2f\n", area_totale);
    }

    return 0;
}