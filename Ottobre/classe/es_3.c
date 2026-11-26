#include <stdio.h>
#include <string.h>

/**
 * Valori di ritorno:
 *   1  -> Le stringhe sono identiche
 *  -1  -> s1 viene prima di s2 in ordine alfabetico
 *   0  -> s1 non viene prima (viene dopo)
 */
/**
 * @brief Verificare se due stringhe rispettano l'ordine richiesto.
 *
 * @param s1 Prima stringa da confrontare.
 * @param s2 Seconda stringa da confrontare.
 *
 * @return Restituisce 1 se l'ordine è corretto, altrimenti 0.
 */
int controlla_ordine(char s1[], char s2[]) {
    int res = strcmp(s1, s2);

    if (res == 0) {
        return 1;   // Sono uguali
    } else if (res < 0) {
        return -1;  // s1 viene prima
    } else {
        return 0;   // s1 non viene prima
    }
}

/**
 * @brief Valori di ritorno: * 1 -> Le stringhe sono identiche * -1 -> s1 viene prima di s2 in ordine alfabetico * 0 -> s1 non viene prima (viene dopo)
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    char str1[100];
    char str2[100];

    printf("Inserisci la prima parola: ");
    scanf("%99s", str1);

    printf("Inserisci la seconda parola: ");
    scanf("%99s", str2);

    int esito = controlla_ordine(str1, str2);

    if (esito == 1) {
        printf("\nLe due stringhe sono uguali (ritorno: 1).\n");
    } else if (esito == -1) {
        printf("\n\"%s\" viene prima di \"%s\" in ordine alfabetico.\n", str1, str2);
    } else {
        printf("\n\"%s\" non viene prima di \"%s\" in ordine alfabetico.\n", str1, str2);
    }

    return 0;
}