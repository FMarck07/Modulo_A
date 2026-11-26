#include <stdio.h>

/**
 * @brief Verificare se un numero appartiene all'intervallo compreso tra i limiti minimo e massimo.
 *
 * @param low Estremo inferiore dell'intervallo.
 * @param high Estremo superiore dell'intervallo.
 * @param numero Puntatore al numero da verificare.
 *
 * @return Restituisce 1 se il numero appartiene all'intervallo, altrimenti 0.
 */
void controllo_numero_compreso(int low, int high, int *numero){
    do{
        printf("Inserisci un numero compreso tra %d e %d: ", low, high);
        scanf("%d", numero);
    }while(*numero < 0 || *numero > 10);
}

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int numero;
    controllo_numero_compreso(0, 10, &numero);
    printf("Numero: %d", numero);
}