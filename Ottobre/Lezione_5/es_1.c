#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Calcolare il quadrato di un numero.
 *
 * @param x Numero di cui calcolare il quadrato.
 *
 * @return Restituisce il quadrato di x.
 */
float quadrato(float x){
    return pow(x, 2);
}

/**
 * @brief Calcolare il cubo di un numero.
 *
 * @param x Numero di cui calcolare il cubo.
 *
 * @return Restituisce il cubo di x.
 */
float cubo(float x){
    return pow(x, 3);
}


/**
 * @brief Creare una funzione con interfaccia: float quadrato(float x), che restituisce il quadrato del parametro x. Creare un’altra funzione, con interfaccia: float cubo(float x), che restituisce il cubo del valore x. Progettare quindi un programma che legge un float da tastiera e visualizza il suo quadrato ed il suo cubo. Per calcolare il quadrato ed il cubo si devono utilizzare le due funzioni sopra definite. ESEMPIO DI ESECUZIONE Inserisci x: 3 QUADRATO: 9.000000 CUBO: 27.000000
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    float numero;
    printf("Inserisci x:");
    scanf("%f", &numero);

    printf("QUADRATO: %.2f\n", quadrato(numero));
    printf("CUBO: %.2f", cubo(numero));

    return 0;
}
