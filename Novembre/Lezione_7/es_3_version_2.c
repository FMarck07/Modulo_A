#include <stdio.h>
#include <string.h>


#define MAX 101

/**
 * @brief Scrivere un programma in linguaggio C che legga due parole da tastiera. Le parole possono contenere al più 100 caratteri ciascuna. Si verifichi se la seconda parola è contenuta nella prima.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
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