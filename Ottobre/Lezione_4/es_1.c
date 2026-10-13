#include <stdio.h>
#include <stdlib.h>


/*Scrivere un programma in linguaggio C che prenda in ingresso una sequenza di numeri interi positivi e negativi, terminata da zero. Quando l'utente inserisce lo zero il programma deve stampare a video la somma di tutti i numeri positivi.

SUGGERIMENTO: Non è necessario memorizzare tutti i numeri positivi, è sufficiente memorizzare la loro somma.

ESEMPIO DI ESECUZIONE

Inserire numeri (0 per uscire):
1
4
7
-4
3
0
SOMMA = 15*/


int main(int argc, char *argv[]){
    int numero, somma = 0;
    printf("Inserire numeri (0 per uscire):");

    do{
        scanf("%d", &numero);
        if(numero > 0) somma += numero; 
    }while(numero != 0);

    printf("\nSOMMA = %d", somma);

    return 0;
}

