#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*Si scriva una funzione int somma_potenze(int a, int n) che dati a e n deve calcolare la sommatoria per i∈[1..n] di ai.

A tal fine si scriva e si usi una funzione int potenza(int x, int y) che dati x  e y deve calcolare xy usando come operazione primitiva il prodotto.

Si realizzi quindi un programma che prende in ingresso a ed n e stampi a video il risultato della sommatoria.

SUGGERIMENTO: ad esempio, se a=2 e i=5 il programma dovrà calcolare: 2^1+2^2+2^3+2^4+2^5=2+4+8+16+32=62.

ESEMPIO DI ESECUZIONE

Inserisci a e n: 2 5
RISULTATO: 62*/


int somma_potenze(int a, int n){
    int somma = 0;
    for(int i = 1; i <= n; i++){
        somma += pow(a, i);
    }
    return somma;
}


int main(int argc, char *argv[]){
    int a, b;
    printf("Inserisci a e n: ");
    scanf("%d %d", &a, &b);
    printf("RISULTATO: %d", somma_potenze(a, b));
}
