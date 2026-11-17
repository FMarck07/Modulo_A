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
    char a;
    int i = 0, j = 0;
    int trovata = 0;
    while(parola[i] != '\0' && !trovata){
        j = 0;
        while(parola2[j] != '\0' && parola[i + j] == parola2[j]){
            j++;
        }
        if(parola2[j] == '\0'){
            trovata = 1;
        }
        
        i++;
    }
    
    if(!trovata){
        printf("seconda parola non contenuta nella prima");
    }else printf("seconda parola contenuta nella prima");
}