#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// algoritmo che mi permetta di capire se un pezzo degli scacchi (re) è sotto scacco dalla regina.


#define N 8

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int xq, yq, xk, yk;
    int vx, vy;

    printf("Inserisci x della regina: ");
    scanf("%d", &xq);
    printf("Inserisci y della regina: ");
    scanf("%d", &yq);

    printf("Inserisci x del re: ");
    scanf("%d", &xk);
    printf("Inserisci y del re: ");
    scanf("%d", &yk);

    if (xq == xk && yq == yk) {
        printf("I due pezzi non possono essere sulla stessa casella!\n");
        return 1;
    }

    vx = abs(xq - xk);
    vy = abs(yq - yk);

    if (xq == xk || yq == yk || vx == vy) {
        printf("Scacco!\n");
        return 0;
    }else printf("no");
    
    return 0;
}