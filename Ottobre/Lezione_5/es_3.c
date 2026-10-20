#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*Codificare in linguaggio C la funzione int uguale(char a, char b), che restituisce:

1 se i due caratteri sono uguali, oppure rappresentano la stessa lettera (anche se una delle due è maiuscola e l'altra minuscola);
0 altrimenti.
SCRIVERE SOLO LA FUNZIONE

SUGGERIMENTO: Invocazioni come uguale('c', 'C') oppure uguale('r', 'r') devono restituire 1. Al contrario, invocazioni come uguale('a', 'b') oppre uguale('x', '@') devono restituire 0. Utilizzare codice ASCII.*/

int uguale(char a, char b){
    a = tolower(a);
    b = tolower(b);

    if(a == b){
        return 1;
    }
}


int main(int argc, char *argv[]){
    printf("")

    return 0;
}