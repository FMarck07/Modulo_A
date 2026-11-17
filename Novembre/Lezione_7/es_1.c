#include <stdio.h>
#include <string.h>


/*Si scriva un programma C che legga da tastiera una stringa (di lunghezza massima 100 caratteri, incluso il terminatore), se ne calcoli la lunghezza (int) e la si stampi a video.
Successivamente, si memorizzi in un'altra variabile la stringa invertita e poi si stampi a video il risultato come indicato nella figura riportata di seguito.

 

N.B = 

Svolgere l'esercizio SENZA utilizzare le funzioni messe a disposizione dalla libreria "string.h".

Non è richiesto nessun controllo sulla stringa in input*/

#define MAX 100

int main(){
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

