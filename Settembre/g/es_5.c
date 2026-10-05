/*Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int prodotto = 0;
    if(argc != 3){
        printf("Errore nel numero di argomenti\n");
        exit(0);
    }
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    if (n1 <= 0 || n2 <= 0) {
        printf("Errore: entrambi i numeri devono essere interi positivi (> 0).\n");
        return 1;
    }

    for(int i = 0; i < n2; i++){
        prodotto += n1;
    }
    printf("Prodotto: %d", prodotto);
}