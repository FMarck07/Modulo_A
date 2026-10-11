#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Si scriva un programma in linguaggio C che:

prende in ingresso una data (giorno, mese, anno forniti come numeri interi)
calcola la data successiva e la visualizza a video.
Si ricorda che il mese di Febbraio ha 29 giorni negli anni bisestili.
Non è necessario implementare un controllo sulla correttezza della data inserita.

SUGGERIMENTO: Utilizzare la soluzione dell’Esercizio 4 per calcolare se l’anno fornito è bisestile.

ESEMPIO DI ESECUZIONE

Inserire la data [GG/MM/AAAA]: 3/3/2000
SUCCESSIVA: 4/3/2000*/


int main(int argc, char *argv[]){
    int anno, giorno, mese;
    do{
        printf("Inserire la data [GG/MM/AAAA]: ");
        scanf("%d/%d/%d", &giorno, &mese, &anno);
    }while(anno <= 0 || giorno <= 0 || mese <= 0);

    int max_giorni;
    if (mese == 2) {
        int bisestile = (anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0);
        max_giorni = bisestile ? 29 : 28;
    } else if (mese == 4 || mese == 6 || mese == 9 || mese == 11) {
        max_giorni = 30;
    } else {
        max_giorni = 31;
    }
    
    if (giorno < max_giorni) {
        giorno++;
    } else {
        giorno = 1;
        if (mese == 12) {
            mese = 1;
            anno++;
        } else {
            mese++;
        }
    }   
    
    printf("SUCCESSIVA: %d/%d/%d", giorno, mese, anno);

    return 0;
}
