#include <stdio.h>
#include <string.h>


#define DIM 100

typedef struct{
    int orario_inizio, durata;
}Lezione; 

/**
 * @brief Verificare se due lezioni hanno intervalli temporali sovrapposti.
 *
 * @param a Prima lezione da confrontare.
 * @param b Seconda lezione da confrontare.
 *
 * @return Restituisce 1 se le lezioni si sovrappongono, altrimenti 0.
 */
int controllo(Lezione a, Lezione b){
    if(a.orario_inizio >= b.orario_inizio + b.durata || a.orario_inizio + a.durata <= b.orario_inizio){
        return 0;
    } else return 1;
}

/**
 * @brief Spostare la seconda lezione dopo la prima quando i due intervalli si sovrappongono.
 *
 * @param a Puntatore alla prima lezione.
 * @param b Puntatore alla seconda lezione.
 *
 * @return La funzione non restituisce un valore; modifica direttamente le due strutture.
 */
void modifica(Lezione *a, Lezione *b){
    int differenza;
    if((*a).orario_inizio > (*b).orario_inizio){
        (*a).orario_inizio = (*b).orario_inizio + (*b).durata;
    }else{
        (*b).orario_inizio = (*a).orario_inizio + (*a).durata;
    }
}   


/**
 * @brief Leggere da tastiera l'orario iniziale e la durata di una lezione.
 *
 * @param lezione Puntatore alla struttura Lezione da compilare.
 *
 * @return La funzione non restituisce un valore; aggiorna direttamente la struttura Lezione.
 */
void lettura(Lezione *lezione){
    scanf("%d", &((*lezione).orario_inizio));
    scanf("%d", &((*lezione).durata));
}

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    Lezione info, mate;
    
    lettura(&info);
    lettura(&mate);
    if(controllo(info, mate)){
        modifica(&info, &mate);
        printf("orario info: %d %d \t orario mate: %d %d", info.orario_inizio, info.durata, mate.orario_inizio, mate.durata);
    }else{
        printf("OK");
    }

    
    return 0;
}
