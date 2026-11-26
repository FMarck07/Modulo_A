#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Dato N un numero intero positivo, calcolare e visualizzare la somma dei primi N numeri pari.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int somma = 0;

    if(argc != 2){
        printf("Errore argomenti\n");
        exit(0);
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        printf("Errore: N deve essere un numero intero positivo maggiore di 0.\n");
        exit(0);
    }
    
    for(int i = 1; i <= n; i++){
        somma += i*2;
    }
    
    printf("La somma vale: %d", somma);
    return 0;
}