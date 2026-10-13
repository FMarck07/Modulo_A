#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Scrivere un programma C che prende in ingresso un numero intero N compreso tra 0 e 30. Il programma deve poi stampare a video:

tutti i numeri pari maggiori di 0 e minori strettamente di N
tutti i numeri dispari maggiori strettamente di N
 e minori di 30
ESEMPIO DI ESECUZIONE

Inserire un numero compreso fra 0 e 30: 18
2
4
6
8
10
12
14
16
19
21
23
25
27
29*/

int main(int argc, char *argv[]){
    int n;
    printf("Inserire un numero compreso fra 0 e 30: ");
    do{
        scanf("%d", &n);
    }while(n <= 0 || n >= 30);
    for(int i = 1; i < 30; i++){
        if(i % 2 == 0 && i < n){
            printf("%d\n", i);
        }
        if(i % 2 != 0 && i > n){
            printf("%d\n", i);
        }
    }


}