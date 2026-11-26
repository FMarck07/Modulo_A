#include <stdio.h>
#include <string.h>


#define MAX 100

/**
 * @brief Si scriva un programma C che legga da tastiera una stringa (di lunghezza massima 100 caratteri, incluso il terminatore), se ne calcoli la lunghezza (int) e la si stampi a video. Successivamente, si memorizzi in un'altra variabile la stringa invertita e poi si stampi a video il risultato come indicato nella figura riportata di seguito.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    char string[MAX], inve[MAX];
    printf("Inserisci una stringa: ");
    scanf("%99s", string);
    int i = 0, j = 0;
    while(string[i] != '\0'){
        i++;
    }
    printf("LUNGHEZZA: %d\n", i);
    printf("INVERTITA: ");
    i--;
    
    while(i >= 0){
        inve[j] = string[i];
        j++;
        i--;
    }
    inve[j] = '\0';
    printf("INVERTITA: %s", inve);
}
