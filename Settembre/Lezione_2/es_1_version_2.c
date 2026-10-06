#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numero_caramelle, numero_bambini, numero, rimanenti;
    float prezzo_caramelle, spesa;

    if(argc != 4){
        printf("Errore nell'inserimento degli argomenti");
        exit(0);
    }

    numero_bambini = atoi(argv[1]);
    numero_caramelle = atoi(argv[2]);
    prezzo_caramelle = atoi(argv[3]);
    if(prezzo_caramelle <= 0 || numero_caramelle <= 0 || prezzo_caramelle <= 0){
        printf("Errore nell'inserimento degli argomenti");
        exit(0);
    }

    numero = numero_caramelle/numero_bambini;
    printf("Caramelle per bambino: %d\n", numero);
    rimanenti = numero_caramelle - (numero_bambini * numero);
    printf("Caramelle rimanenti: %d\n", rimanenti);
    spesa = numero * prezzo_caramelle;
    printf("Spesa per bambino: %.2f\n", spesa);
    
    return 0;
}