#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Scrivere un programma C che, dato un numero intero N , calcoli e stampi il fattoriale di tutti i numeri interi minori o uguali a N
. Si usi il tipo di ciclo ritenuto più adeguato.

SUGGERIMENTO: il fattoriale di N è il risultato della moltiplicazione di tutti i numeri interi compresi fra 1 e N. Esempio: 4!=4⋅3⋅2⋅1

ESEMPIO DI ESECUZIONE

Inserire N: 6
Fatt(1) = 1
Fatt(2) = 2
Fatt(3) = 6
Fatt(4) = 24
Fatt(5) = 120
Fatt(6) = 720*/

int main(int argc, char *argv[]){
    int n, fatt = 1;
    printf("Inserire N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatt *= i;
        printf("Fatt(%d) = %d\n", i, fatt);
    }
    
}