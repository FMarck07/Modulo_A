


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief In un barattolo ci sono 𝑁 biglie, ciascuna delle quali può essere di colore rosso o azzurro. Si sa che le biglie rosse sono sempre il doppio di quelle azzurre. Leggere da tastiera il numero intero 𝑁 di biglie contenute nel barattolo, dove 𝑁 è un multiplo di 3 (non vanno eseguiti controlli sul numero inserito). Stampare a video il numero di biglie rosse e di biglie azzurre calcolate in funzione di 𝑁. ESEMPIO DI ESECUZIONE N:9 Rosse:6 Azzurre:3
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int n, rosse, blue;
    do{
        printf("N:");
        scanf("%d", &n);
    }while(n % 3 != 0);
    
    blue = n / 3;
    rosse = blue * 2;
    printf("Rosse: %d\n", rosse);
    printf("Azzurre: %d\n", blue);


    return 0;
}
