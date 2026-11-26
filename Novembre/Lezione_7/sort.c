#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Confrontare due interi per stabilire il loro ordine crescente.
 *
 * @param a Puntatore al primo intero.
 * @param b Puntatore al secondo intero.
 *
 * @return Restituisce un valore negativo, nullo o positivo secondo l'ordine dei due interi.
 */
int confronta_interi(const void *a, const void *b) {
    int x = *(const int *) a;
    int y = *(const int *) b;

    return(x > y) - (y > x);
    //return (y > x) - (y < x);
}

/**
 * @brief Confrontare lessicograficamente due stringhe per l'ordinamento con qsort.
 *
 * @param a Puntatore alla prima stringa.
 * @param b Puntatore alla seconda stringa.
 *
 * @return Restituisce un valore negativo, nullo o positivo secondo l'ordine delle stringhe.
 */
int confronta_stringhe(const void *a, const void *b) {
    const char *x = *(const char **) a;
    const char *y = *(const char **) b;

    return strcmp(x, y);
    //return (y > x) - (y < x);
}

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int arr[] = {50, 12, 5, 7, 78, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), confronta_interi);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    const char *parole[] = {"pera", "mela", "banana", "arancia"};
    int n_parole = sizeof(parole) / sizeof(parole[0]);
    qsort(parole, n_parole, sizeof(const char *), confronta_stringhe);
    int i = 0;
    for(int i = 0; i < n_parole; i++){
        printf("\n%s", parole[i]);
    }
}