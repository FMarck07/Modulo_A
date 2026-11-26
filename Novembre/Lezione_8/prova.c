#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_RIGA 256
#define MAX_DESC 20
#define Nprodotti 11

typedef struct {
    char descrizione[MAX_DESC];
    int quantita;
    int anno_scadenza;
} prodotto;

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    prodotto archivio[Nprodotti]; 
    int nprodotti = 0;
    FILE *fp = fopen("inizializzazione_es4.txt", "r");
    if(fp == 0){
        printf("Errore");
        exit(1);
    }
    while(nprodotti < Nprodotti && 
        fscanf(fp, "%19s %d %d", 
            archivio[nprodotti].descrizione, 
            &archivio[nprodotti].quantita, 
            &archivio[nprodotti].anno_scadenza) == 3){
        nprodotti++;
    }
    fclose(fp);
    for(int i = 0; i < nprodotti; i++){
        printf("%s\n", archivio[i].descrizione);
        printf("%d\n", archivio[i].quantita);
        printf("%d\n", archivio[i].anno_scadenza);
    }
    return 0;
}