

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Progettare un programma in linguaggio C che: chiede all’utente un numero intero; legge il numero intero; stampa a video se il numero inserito dall’utente è positivo, negativo o uguale a zero. ESEMPIO DI ESECUZIONE Inserire numero: 5 POSITIVO Inserire numero: -3 NEGATIVO Inserire numero: 0 ZERO
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int n;

    printf("Inserire numero: ");
    scanf("%d", &n);

    if(n > 0)printf("POSITIVO");
    else if(n < 0) printf("NEGATIVO");
    else printf("ZERO");
    
    return 0;
}