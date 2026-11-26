#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
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

    // tringolo partendo da ultimo numero fino a tutti
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j >= n - i + 1){
                printf("%d ", i * j);
            }else printf("   ");            
        }
        printf("\n");
    }
    printf("\n\n");
    
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", i * j);
        }
        printf("\n");
    }

    printf("\n\n");
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((j == 1 || j == n) || i == 1|| i == n){
                printf("* ");
            }else printf("  ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((j >= i)){
                printf("%d ", i + j);
            }else printf("   ");            
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i == j) || j == n - i + 1){
                printf("X ");
            }else printf("  ");        
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(j == i*2+1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}