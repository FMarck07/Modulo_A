#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Progettare un programma in linguaggio C che, letti da tastiera tre numeri interi a , b e c , stampi a video come risultato il numero massimo tra questi tre. ESEMPIO DI ESECUZIONE Inserire 3 numeri: 5 13 2 MASSIMO: 13
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int a, b, c;
    printf("Inserire 3 numeri: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("MASSIMO: %d\n", max);
 
    return 0;
}