#include <stdio.h>
#include <string.h>


#define DIM 100

/**
 * @brief Verificare se un carattere è presente nella parola segreta e rivelarne tutte le occorrenze.
 *
 * @param stringa_s Stringa mascherata da aggiornare.
 * @param stringa Parola segreta da confrontare.
 * @param c Carattere inserito dall'utente.
 *
 * @return Restituisce 1 se il carattere è presente, altrimenti 0.
 */
int controllo(char stringa_s[], char stringa[], char c){
    int flag = 0, i = 0;
    while(stringa[i] != '\0'){
        if(c == stringa[i]){
            stringa_s[i] = stringa[i];
            flag = 1;
        }
        i++;
    }
    return flag;
}

/**
 * @brief Gestire una partita del gioco dell'impiccato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    char stringa[DIM];
    
    printf("Inserisci la parola segreta: ");
    scanf("%99s", stringa);

    int lunghezza = strlen(stringa);
    char stringa_segreta[lunghezza + 1], carattere;
    int i = 0, errori = 0;


    while(stringa[i] != '\0'){
        stringa_segreta[i] = '-';
        i++;
    }
    stringa_segreta[lunghezza] = '\0';

    while(strcmp(stringa_segreta, stringa) != 0 && errori < 5){
        printf("\nParola: %s (Errori: %d/5)\n", stringa_segreta, errori);
        printf("%s\n", stringa_segreta);
        scanf(" %c", &carattere);
        if(!controllo(stringa_segreta, stringa, carattere)){
            errori++;
        }
    }
    if(errori < 5){
        printf("Hai vinto");
    }else printf("Hai perso");
    
    
    return 0;
}