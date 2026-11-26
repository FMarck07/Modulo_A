#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief Leggere i dati richiesti e disegnare la figura del rombo.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int n;
    do{
        printf("Inserire N: ");
        scanf("%d", &n);
    }while(n <= 0);

    for(int i = 0; i < n; i++){
        for(int s = 0; s < n - i - 1; s++){
            printf(" ");
        }
        for(int j = 0; j < (i*2 + 1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n - 1; i > 0; i--){
        for(int s = 0; s < n - i; s++){
            printf(" ");
        }
        for(int j = 0; j < (i*2 - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}