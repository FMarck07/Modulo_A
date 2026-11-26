#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
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
    rimanenti = numero_caramelle % numero_bambini;
    printf("Caramelle rimanenti: %d\n", rimanenti);
    spesa = numero * prezzo_caramelle;
    printf("Spesa per bambino: %.2f\n", spesa);
    
    return 0;
}