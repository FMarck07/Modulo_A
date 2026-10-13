#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Creare un programma C che richieda all’utente di inserire un numero N
 e stampi a schermo una piramide, rivolta verso l’alto, composta da caratteri di asterisco (*) di altezza pari ad N
 righe. La base della piramide deve essere composta da 2N+1
 asterischi (per assicurare che la lunghezza sia
dispari, in modo che la punta sia esattamente centrata).

SUGGERIMENTO: Ad ogni riga della piramide, per centrare la punta verso l’alto, devono essere stampati esattamente 2 asterischi in più rispetto alla riga precedente; allo stesso tempo, ad ogni riga viene stampato uno spazio in meno rispetto alla riga precedente. L’ultima riga, invece, non contiene spazi, poiché costituisce la base della piramide.

ESEMPIO DI ESECUZIONE

Inserire N: 5
     *
    ***
   *****
  *******
 **********/

int main(int argc, char *argv[]){
    int n;
    do{
        printf("Inserire N: ");
        scanf("%d", &n);
    }while(n <= 0);

    for (int i = 0; i < n; i++) {
        // 1. Ciclo per gli spazi: quante volte deve girare?
        for (int s = 0; s < n-i-1; s++) {
            printf(" ");
        }

        // 2. Ciclo per gli asterischi: quante volte deve girare?
        for (int a = 0; a < (i*2+1); a++) {
            printf("*");
        }

        // 3. Fine riga
        printf("\n");
    }
    
    

    return 0;
}