#include <stdio.h>
#include <math.h>


// Progettare un algoritmo che, letto il valore di r del raggio, calcoli e sciva l'area del cerchio relativo.

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    float raggio, area;
    printf("Inserisci il valore del cerchio: ");
    scanf("%f", &raggio);

    area = pow(raggio, 2)*M_PI;

    printf("\nArea del cerchio: %.2f", area);

}