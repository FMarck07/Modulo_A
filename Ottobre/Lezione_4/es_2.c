#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Scrivere un programma che prende in ingresso da tastiera un numero N . Il programma deve poi calcolare la somma di una sequenza di interi dati da tastiera. L'inserimento termina quando la somma è maggiore o uguale a N . Il programma deve stampare infine la somma calcolata e la differenza tra questa e il numero N . SUGGERIMENTO: Non è necessario memorizzare tutti i numeri forniti, è sufficiente memorizzare la loro somma. ESEMPIO DI ESECUZIONE Inserire un numero N: 15 Inserire valori fino ad arriv
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int n, somma = 0, numero, differenza = 0;
    printf("Inserire un numero N:");
    scanf("%d", &n);
    printf("\nInserire valori fino ad arrivare a %d:", n);

    do{
        scanf("%d", &numero);
        somma += numero; 
    }while(n > somma);
    differenza = somma-n;

    printf("\nSOMMA = %d", somma);
    printf("\nDifferenza = %d", differenza);


    return 0;
}