#include <stdio.h>

/*Scrivere un programma in linguaggio C che stampi a video i numeri perfetti tra 1 e 10000. Un numero si dice perfetto se è uguale alla somma dei suoi divisori. Esempio: 28 = 1 + 2 + 4 + 7 + 14 è un numero perfetto.

ESEMPIO DI ESECUZIONE (non completo)

Stampa dei numeri perfetti tra 1 e 10000
6
28*/


int divisori(int n){
    int somma_divisori = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            somma_divisori += i;
        }
    }
    return somma_divisori;
}


int main(int argc, char *argv[]){
    
    printf("Stampa dei numeri perfetti tra 1 e 10000\n");

    for(int i = 1; i <= 10000; i++){
        if(divisori(i) == i){
            printf("%d\n", i);
        }
    }

    return 0;
}