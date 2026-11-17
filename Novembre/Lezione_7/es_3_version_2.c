#include <stdio.h>
#include <string.h>


/*Scrivere un programma in linguaggio C che legga due parole da tastiera. Le parole possono contenere al più 100 caratteri ciascuna.
Si verifichi se la seconda parola è contenuta nella prima.*/

#define MAX 101

int main(){
    char parola[MAX], parola2[MAX];

    printf("Inserisci prima stringa: ");
    scanf("%100s", parola);
    printf("Inserisci seconda stringa: ");
    scanf("%100s", parola2);
    int count = 0, len2 = strlen(parola2);
    // con funzione
    char *ptr = parola;
    while((ptr = strstr(ptr, parola2)) != NULL){
        count++;
        ptr++;
    }
    if(count > 0){
        printf("seconda parola contenuta nella prima\n");
        printf("Numero di occorenze: %d", count);
    }else printf("seconda parola non contenuta nella prima\n");
    
}