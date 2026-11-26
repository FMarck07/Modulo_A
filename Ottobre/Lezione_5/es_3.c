#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


/**
 * @brief Confrontare due caratteri e verificare se sono uguali.
 *
 * @param a Primo carattere.
 * @param b Secondo carattere.
 *
 * @return Restituisce 1 se i caratteri sono uguali, altrimenti 0.
 */
int uguale(char a, char b){
    a = tolower(a);
    b = tolower(b);

    if(a == b){
        return 1;
    }
}


/**
 * @brief Codificare in linguaggio C la funzione int uguale(char a, char b), che restituisce: 1 se i due caratteri sono uguali, oppure rappresentano la stessa lettera (anche se una delle due è maiuscola e l'altra minuscola); 0 altrimenti. SCRIVERE SOLO LA FUNZIONE SUGGERIMENTO: Invocazioni come uguale('c', 'C') oppure uguale('r', 'r') devono restituire 1. Al contrario, invocazioni come uguale('a', 'b') oppre uguale('x', '@') devono restituire 0. Utilizzare codice ASCII.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    printf("")

    return 0;
}