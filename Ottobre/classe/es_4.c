#include <stdio.h>
#include <string.h>

/**
 * @brief for(int i = 0; i <= l; i++){ str2[i] = str1[i]; }
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    char str1[100];

    printf("Inserisci la prima parola: ");
    scanf("%99s", str1);

    int l = strlen(str1);
    char str2[l + 1];

    strcpy(str2, str1);

    
    printf("parola %s", str2);
    return 0;
}