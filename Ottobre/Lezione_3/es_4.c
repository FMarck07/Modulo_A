#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Progettare un programma che prende in ingresso il valore di un anno (es.: 1492, 2003…) e stabilisce se tale anno è bisestile o meno. SUGGERIMENTO: Si ricorda che un anno è bisestile se è divisibile per 4 e, qualora sia l'anno di inizio di un secolo, solo se è divisibile anche per 400. Non è necessario implementare un controllo sulla correttezza della data inserita. ESEMPIO DI ESECUZIONE Anno: 2003 NON BISESTILE Anno: 2012 BISESTILE
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int anno; 
    do{
        printf("Anno: ");
        scanf("%d", &anno);
    }while(anno <= 0);
    
    if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){
        printf("BISESTILE");
    }else printf("NON BISESTILE");

    return 0;
}