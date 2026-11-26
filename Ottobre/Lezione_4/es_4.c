#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Scrivere un programma C che calcoli la parte intera della radice quadrata di un naturale N , senza usare le funzioni del linguaggio C per calcolare la radice quadrata. SUGGERIMENTO: è possibile verificare il valore del quadrato dei numeri interi da 0 in avanti, per verificare qual è il numero intero più grande che elevato al quadrato non supera N . ESEMPIO DI ESECUZIONE Inserire un numero: 9 Radice di 9 (parte intera): 3
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int numero, radice = 0;

    printf("Inserire un numero: ");
    scanf("%d", &numero);
    
    while((radice + 1) * (radice + 1) <= numero){
        radice++;
    }

    printf("Radice di %d (parte intera): %d", numero, radice);

    return 0;
}