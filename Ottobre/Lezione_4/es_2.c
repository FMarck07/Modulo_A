#include <stdio.h>
#include <stdlib.h>

/*Scrivere un programma che prende in ingresso da tastiera un numero N
. Il programma deve poi calcolare la somma di una sequenza di interi dati da tastiera. L'inserimento termina quando la somma è maggiore o uguale a N
. Il programma deve stampare infine la somma calcolata e la differenza tra questa e il numero N
.

SUGGERIMENTO: Non è necessario memorizzare tutti i numeri forniti, è sufficiente memorizzare la loro somma.

ESEMPIO DI ESECUZIONE

Inserire un numero N: 
15
Inserire valori fino ad arrivare a 15:
5
3
4
2
1
Somma = 15
Differenza = 0
Inserire un numero N: 
11
Inserire valori fino ad arrivare a 11:
6
3
5
Somma = 14
Differenza = 3*/


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

