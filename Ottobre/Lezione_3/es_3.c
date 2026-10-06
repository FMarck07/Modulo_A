#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Scrivere un programma che legga da tastiera le tre lunghezze dei lati di un triangolo (detti A
, B
 e C
).
Il programma deve determinare se il triangolo è:

Equilatero;
Isoscele;
Scaleno;
Rettangolo.
Se il triangolo rispetta più caratteristiche contemporaneamente, devono essere mostrate tutte.

SUGGERIMENTO: Un triangolo equilatero è anche isoscele, mentre (utilizzando solamente valori interi per 
la misura dei lati) solo i triangoli scaleni possono essere rettangoli. Prestare molta attenzione alla 
formattazione dell'output, in particolare all'ordinamento delle proprietà; per convenzione, 
si segua quest'ordine (dalla prima all'ultima) per restituire all'utente la lista delle possibili proprietà:

SCALENO
ISOSCELE
EQUILATERO
RETTANGOLO
ESEMPIO DI ESECUZIONE

A: 3
B: 4
C: 5
SCALENO
RETTANGOLO

A: 6
B: 6
C: 6
ISOSCELE
EQUILATERO

A: 2
B: 2
C: 3
ISOSCELE*/

int prova(int a, int b, int c){
    if(pow(a, 2) + pow(b, 2) == pow(c, 2) || 
    pow(c, 2) + pow(b, 2) == pow(a, 2) || 
    pow(a, 2) + pow(c, 2) == pow(b, 2)){
        return 1;
    }else return 0;
}

int main(int argc, char *argv[]){
    int a, b, c;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if(a == b && a == c){
        printf("ISOSCELE\n");
        printf("EQUILATERO");
    }else if(a == b || b == c || c == a){
        printf("ISOSCELE");
    }else{
        printf("SCALENO\n");
        if(prova(a, b, c) == 1){
            printf("RETTANGOLO");
        }        
    }

    return 0;
}