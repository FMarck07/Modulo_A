

#include <stdio.h>
#include <string.h>

#define MAX_RIGA 256
#define MAX_DESC 20
#define Nprodotti 11

typedef struct {
    char descrizione[MAX_DESC];
    int quantita;
    int anno_scadenza;
} prodotto;

/**
 * @brief Un negozio di alimentari ha un archivio (realizzato tramite un array di strutture, vedi "Inizializzazioni per Array di strutture") in cui vengono memorizzati i prodotti presenti in archivio. Per ogni prodotto in archivio, si dispone dei seguenti dati: La descrizione (stringa max 20 caratteri compreso il terminatore). La quantità disponibile in archivio (intero). L’anno di scadenza (intero). Si definisca il tipo di dato "prodotto" con i 3 campi definiti sopra. Si utilizzi poi la dichiarazione nel
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    prodotto archivio[Nprodotti];
    int nprodotti = 0;
    char riga[MAX_RIGA];
    FILE *fp = fopen("inizializzazione_es4.txt", "r");
    if (fp == NULL) {
        printf("Errore nell'apertura del file!\n");
        return 1;
    }
    while (nprodotti < Nprodotti &&
           fscanf(fp, "%19s %d %d",
                  archivio[nprodotti].descrizione,
                  &archivio[nprodotti].quantita,
                  &archivio[nprodotti].anno_scadenza) == 3) {
        nprodotti++;
    }
    fclose(fp);
    prodotto scaduti[Nprodotti]; 
    int num_scaduti = 0;
    int anno_corrente = 2026;


    for (int i = 0; i < Nprodotti; i++) {
        if (archivio[i].anno_scadenza < anno_corrente) {
            scaduti[num_scaduti] = archivio[i];
            num_scaduti++;
        }
    }

    printf("\nOggetti scaduti:\n");
    if (num_scaduti == 0) {
        printf("Nessun prodotto scaduto.\n");
    } else {
        for (int i = 0; i < num_scaduti; i++) {
            printf("%s\n", scaduti[i].descrizione);
        }
    }

    return 0;
}