#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Scrivere un programma C che calcoli la parte intera della radice quadrata di un naturale N
, senza usare le funzioni del linguaggio C per calcolare la radice quadrata.

SUGGERIMENTO: è possibile verificare il valore del quadrato dei numeri interi da 0 in avanti, per verificare qual è il numero intero più grande che elevato al quadrato non supera N
.

ESEMPIO DI ESECUZIONE

Inserire un numero: 9
Radice di 9 (parte intera): 3*/

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