#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Dati due numeri interi N e M con M≥0, scrivere un programma che calcoli la potenza NM. Risolvere il problema senza utilizzare le funzioni messe a disposizione dal linguaggio C per calcolare l'elevamento a potenza (ad esempio la funzione pow della libreria math.h). ESEMPIO DI ESECUZIONE BASE: 2 ESPONENTE: 3 POTENZA: 8
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int base, esponente, potenza;

    printf("BASE: ");
    scanf("%d", &base);
    
    printf("\nESPONENTE: ");
    scanf("%d", &esponente);

    potenza = pow(base, esponente);

    printf("\nPOTENZA: %d", potenza);
    


    return 0;
}