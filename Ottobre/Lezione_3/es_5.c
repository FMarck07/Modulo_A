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
    int giorno, mese, anno;
    int giorni_mese[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    do{
        printf("Inserire la data [GG/MM/AAAA]: ");
        scanf("%d/%d/%d", &giorno, &mese, &anno);
    } while (giorno <= 0 || mese <= 0 || mese > 12 || anno <= 0);    
    if(mese == 2){
        if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) giorni_mese[2] = 29;
        else giorni_mese[2] = 28;
    }

    if(giorno < giorni_mese[mese]){
        giorno++;
    }else{
        giorno = 1;
        if(mese == 12){
            mese = 1;
            anno++;
        }else{
            mese++;
        }
    }

    printf("SUCCESSIVA: %d/%d/%d", giorno, mese, anno);

    return 0;
}
