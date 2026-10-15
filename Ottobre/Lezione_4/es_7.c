#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Scrivere un programma C che, dato un numero intero N , calcoli e stampi il fattoriale di tutti i numeri interi minori o uguali a N
. Si usi il tipo di ciclo ritenuto più adeguato.

SUGGERIMENTO: il fattoriale di N è il risultato della moltiplicazione di tutti i numeri interi compresi fra 1 e N. Esempio: 4!=4⋅3⋅2⋅1
*/

int fatt(int n){
    if(n <= 1) return 1;
    else return n * fatt(n - 1);
}

int main(int argc, char *argv[]){
    int n, f = 1;
    printf("Inserire N: ");
    scanf("%d", &n);    

    for(int i = 1; i <= n; i++){
        printf("Fatt(%d) = %d\n", i, fatt(i));
    }
    
    
    /*for(int i = 1; i <= n; i++){
        f *= i;
        printf("Fatt(%d) = %d\n", i, f);
    }*/
    return 0;
    
}