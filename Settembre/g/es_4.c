#include <stdio.h>
#include <stdlib.h>

/*Dato N un numero intero positivo, calcolare e visualizzare la
somma dei primi N numeri pari.*/

int main(int argc, char *argv[]){
    int somma = 0;

    if(argc != 2){
        printf("Errore argomenti\n");
        exit(0);
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        printf("Errore: N deve essere un numero intero positivo maggiore di 0.\n");
        exit(0);
    }
    
    for(int i = 1; i <= n; i++){
        somma += i*2;
    }
    
    printf("La somma vale: %d", somma);
    return 0;
}