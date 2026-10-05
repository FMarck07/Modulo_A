/*Un signore contatta un piastrellista per rimettere a 
nuovo il pavimento del bagno della sua casa. 
Il piastrellista chiede al signore la dimensione e il numero 
delle piastrelle che desidera acquistare.

Chiedere all'utente:

Lunghezza lato piastrella (si supponga che sia quadrata)
Numero di piastrelle da comprare
Calcolare quindi l'area del bagno ricoperta dalle piastrelle
e mostrarla a schermo.

ESEMPIO DI ESECUZIONE

Lato piastrella:5
Numero piastrelle:10
Area totale:250*/

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