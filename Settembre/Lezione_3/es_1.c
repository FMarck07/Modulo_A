#include <stdio.h>
/*Scrivere un programma in linguaggio C che prenda in ingresso una sequenza di
numeri interi positivi e negativi, terminata da zero. Quando l'utente inserisce lo
zero il programma deve stampare a video la somma di tutti i numeri positivi
(int).
CONSIGLIO: Non è necessario memorizzare tutti i numeri positivi, è
sufficiente memorizzare la loro somma.*/


int main(int argc, char *argv[]) {
    int n = 1, somma = 0;
    do{
        scanf("%d", &n);
        if(n > 0)
            somma+=n;
    }while(n != 0);
    printf("SOMMA = %d", somma);
    return 0;
}