#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Creare una funzione con interfaccia: float quadrato(float x), che restituisce il quadrato del parametro x. 

Creare un’altra funzione, con interfaccia: float cubo(float x), che restituisce il cubo del valore x.

Progettare quindi un programma che legge un float da tastiera e visualizza il suo quadrato ed il suo cubo. Per calcolare il quadrato ed il cubo si devono utilizzare le due funzioni sopra definite.

ESEMPIO DI ESECUZIONE

Inserisci x: 3
QUADRATO: 9.000000
CUBO: 27.000000*/

float quadrato(float x){
    return pow(x, 2);
}

float cubo(float x){
    return pow(x, 3);
}


int main(int argc, char *argv[]){
    float numero;
    printf("Inserisci x:");
    scanf("%f", &numero);

    printf("QUADRATO: %.2f\n", quadrato(numero));
    printf("CUBO: %.2f", cubo(numero));

    return 0;
}

