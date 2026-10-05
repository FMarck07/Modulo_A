/*Un signore contatta un piastrellista per rimettere a nuovo il pavimento del bagno della sua casa. Il
piastrellista chiede al signore la dimensione e il numero delle piastrelle che desidera acquistare.
Chiedere all'utente:
● Lunghezza lato piastrella (si supponga che sia quadrata)
● Numero di piastrelle da comprare
Calcolare quindi l'area del bagno ricoperta dalle piastrelle e mostrarla a schermo.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int numero;
    float lunghezza, prodotto;

    printf("\nInserisci la Lunghezza delle piastella: ");
    scanf("%f", &lunghezza);

    printf("\nInserisci il numero delle piastrelle: ");
    scanf("%d", &numero);

    prodotto = lunghezza * lunghezza * numero;

    printf("Area vale: %.2f\n", prodotto);

    return 0;
}