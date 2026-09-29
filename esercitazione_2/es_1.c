#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numero_caramelle, numero_bambini;
    float prezzo_caramelle, spesa;
    int numero, rimanenti;
    do{
        printf("Inserisci il numero di bambini: ");
        scanf("%d", &numero_bambini);
        printf("\nInserisci il numero di caramelle: ");
        scanf("%d", &numero_caramelle);
        printf("\nInserisci il prezzo delle caramelle: ");
        scanf("%f", &prezzo_caramelle);
    }while(prezzo_caramelle <= 0 || numero_caramelle <= 0);

    numero = numero_caramelle/numero_bambini;
    printf("Caramelle per bambino: %d\n", numero);
    rimanenti = numero_caramelle - (numero_bambini * numero);
    printf("Caramelle rimanenti: %d\n", rimanenti);
    spesa = numero * prezzo_caramelle;
    printf("Spesa per bambino: %.2f\n", spesa);
    
    return 0;
}



