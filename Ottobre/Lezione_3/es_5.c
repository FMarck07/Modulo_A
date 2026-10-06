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

    if(mese == 2){
        if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){
            if(giorno == 29){
                mese += 1;
                giorno = 1;
            }else giorno += 1;
        }else{
            if(giorno == 28){
                mese += 1;
                giorno = 1;
            }else giorno += 1;
        }
    }else if(mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10){
        if(giorno < 31){
            giorno += 1;
        }else if(giorno == 31){
            giorno = 1;
            mese +=1;
        }  
        else if(mese < 12){
            mese += 1;
        }else if(mese == 12){
            
        }
    }else if(mese == 12){
        if(giorno < 31){
            giorno += 1;
        }else if(giorno == 31){
            anno += 1;
            mese = 1;
            giorno = 1;
        }  
        
    }
    else{
        if(giorno < 30){
            giorno += 1;
        }else if(giorno == 30){
            giorno = 1;
            mese +=1;
        }      
        else if(mese < 12){
            mese += 1;
        }else{
            anno += 1;
        }
    }
    
    
    printf("SUCCESSIVA: %d/%d/%d", giorno, mese, anno);

    return 0;
}
