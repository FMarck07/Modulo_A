/*In un barattolo ci sono 𝑁 biglie, ciascuna delle quali può essere di colore rosso o azzurro. 
Si sa che le biglie rosse sono sempre il doppio di quelle azzurre. 
Leggere da tastiera il numero intero 𝑁 di biglie contenute nel barattolo, 
dove 𝑁 è un multiplo di 3 (non vanno eseguiti controlli sul numero inserito). 
Stampare a video il numero di biglie rosse e di biglie azzurre calcolate in funzione di 𝑁.

ESEMPIO DI ESECUZIONE

N:9
Rosse:6
Azzurre:3*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
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

