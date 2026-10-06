#include <stdio.h>
#include <stdlib.h>

/*Progettare un programma in linguaggio C che, letti da tastiera tre numeri interi a
, b
 e c
, stampi a
video come risultato il numero massimo tra questi tre.

ESEMPIO DI ESECUZIONE

Inserire 3 numeri: 5 13 2
MASSIMO: 13
*/



int main(int argc, char *argv[]){
    int a, b, c;
    printf("Inserire 3 numeri: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("MASSIMO: %d", a);
    }else if(b > a && b > c){
        printf("MASSIMO: %d", b);
    }else{
        printf("MASSIMO: %d", c);
    }
    return 0;
}