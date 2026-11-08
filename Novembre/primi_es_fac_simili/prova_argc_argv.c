#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 100

int rivela(char mascherata[], char segreta[], char c, int *occorrenze){
    int i = 0;
    while(segreta[i] != '\0'){
        if(c == segreta[i]){
            mascherata[i] = c;
            (*occorrenze)++;
        }
        i++;
    }
}

int main(int argc, char *argv[]) {
    
    int vite = 6;
    if(argc != 2){
        printf("Errori nel numero di argomenti");
        exit(1);
    }
    char parola[DIM];
    strncpy(parola, argv[1], sizeof(parola) - 1);
    parola[sizeof(parola) - 1] = '\0';
    int lunghezza = strlen(parola), i = 0, occorrenze = 0;
    char parola_m[lunghezza + 1];
    while(parola[i] != '\0'){
        parola_m[i] = '*';
        i++;
    }
    parola_m[lunghezza] = '\0';
    char carattere;

    while(strcmp(parola_m, parola) != 0 && vite > 0){
        occorrenze = 0;
        printf("%s", parola_m);
        printf("Vite rimanenti: %d\n", vite);
        scanf(" %c", &carattere);
        rivela(parola_m, parola, carattere, &occorrenze);
        if(occorrenze > 0){
            printf("Numero di lettere scoperte %d\n", occorrenze);
        }else {
            printf("Carattere non presente\n");
            vite--;
        }
    }
    if(!vite){
        printf("Hai perso");
    }else{
        printf("Hai vinto");
    }

}