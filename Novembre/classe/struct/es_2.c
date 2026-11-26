#include <stdio.h>
#include <string.h>

typedef struct{
    int minuti;
    int ora;
}Orario;

/**
 * @brief Calcolare l'orario successivo gestendo il passaggio al minuto successivo e alla nuova ora.
 *
 * @param attuale Struttura Orario rappresentante l'ora corrente.
 *
 * @return Restituisce la struttura Orario relativa al minuto successivo.
 */
Orario succ(Orario attuale){
    attuale.minuti++;
    if(attuale.minuti == 60){
        attuale.minuti = 0;
        attuale.ora++;
        if(attuale.ora == 24){
            attuale.ora = 0;
        }
    }

    return attuale;
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
    Orario attuale, successivo;
    do{
        printf("Inserisci l'orario attaule: \n");
        printf("Ora: \n");
        scanf("%d", &attuale.ora);
        printf("minuti: \n");
        scanf("%d", &attuale.minuti);
    } while (attuale.ora < 0 || attuale.ora > 23 || attuale.minuti < 0 || attuale.minuti > 59);    
    successivo = succ(attuale);    
    
    printf("%d: %d", successivo.ora, successivo.minuti);
    return 0;
}