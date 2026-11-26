#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Calcolare il fattoriale di un numero intero positivo.
 *
 * @param n Numero intero positivo di cui calcolare il fattoriale.
 *
 * @return Restituisce il fattoriale di n.
 */
int fatt(int n){
    if(n <= 1) return 1;
    else return n * fatt(n - 1);
}

/**
 * @brief for(int i = 1; i <= n; i++){ f *= i; printf("Fatt(%d) = %d\n", i, f); }
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int n, f = 1;
    printf("Inserire N: ");
    scanf("%d", &n);    

    for(int i = 1; i <= n; i++){
        printf("Fatt(%d) = %d\n", i, fatt(i));
    }
    
    
    
    return 0;
    
}