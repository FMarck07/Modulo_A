#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 100

/**
 * @brief Rivelare nella parola mascherata tutte le occorrenze del carattere inserito.
 *
 * @param mascherata Stringa mascherata da aggiornare.
 * @param segreta Parola segreta da confrontare.
 * @param c Carattere scelto dal giocatore.
 * @param occorrenze Puntatore al contatore delle lettere trovate.
 *
 * @return La funzione non restituisce un valore; aggiorna mascherata e occorrenze.
 */
int rivela(char mascherata[], char segreta[], char c, int *occorrenze){
    int i = 0;
    while(segreta[i] != '\0'){
        if(c == segreta[i]){
            mascherata[i] = c;
            (*occorrenze)++;
        }
        i++;
    }
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
    
    int vite = 6;
    if(argc != 2){
        printf("Errori nel numero di argomenti");
        exit(1);
    }
    char parola[DIM];
    strncpy(parola, argv[1], sizeof(parola) - 1);
    parola[sizeof(parola) - 1] = '\0';
    int lunghezza = strlen(parola), i = 0, occorrenze = 0;
    char parola_m[lunghezza + 1];
    while(parola[i] != '\0'){
        parola_m[i] = '*';
        i++;
    }
    parola_m[lunghezza] = '\0';
    char carattere;

    while(strcmp(parola_m, parola) != 0 && vite > 0){
        occorrenze = 0;
        printf("%s", parola_m);
        printf("Vite rimanenti: %d\n", vite);
        scanf(" %c", &carattere);
        rivela(parola_m, parola, carattere, &occorrenze);
        if(occorrenze > 0){
            printf("Numero di lettere scoperte %d\n", occorrenze);
        }else {
            printf("Carattere non presente\n");
            vite--;
        }
    }
    if(!vite){
        printf("Hai perso");
    }else{
        printf("Hai vinto");
    }

}