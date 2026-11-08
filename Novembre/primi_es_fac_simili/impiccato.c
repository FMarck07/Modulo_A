#include <stdio.h>
#include <string.h>


#define DIM 100

int controllo(char stringa_s[], char stringa[], char c){
    int flag = 0, i = 0;
    while(stringa[i] != '\0'){
        if(c == stringa[i]){
            stringa_s[i] = stringa[i];
            flag = 1;
        }
        i++;
    }
    return flag;
}

int main() {
    char stringa[DIM];
    
    printf("Inserisci la parola segreta: ");
    scanf("%99s", stringa);

    int lunghezza = strlen(stringa);
    char stringa_segreta[lunghezza + 1], carattere;
    int i = 0, errori = 0;


    while(stringa[i] != '\0'){
        stringa_segreta[i] = '-';
        i++;
    }
    stringa_segreta[lunghezza] = '\0';

    while(strcmp(stringa_segreta, stringa) != 0 && errori < 5){
        printf("\nParola: %s (Errori: %d/5)\n", stringa_segreta, errori);
        printf("%s\n", stringa_segreta);
        scanf(" %c", &carattere);
        if(!controllo(stringa_segreta, stringa, carattere)){
            errori++;
        }
    }
    if(errori < 5){
        printf("Hai vinto");
    }else printf("Hai perso");
    
    
    return 0;
}