#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Scrivere un programma C che legga una parola introdotta da tastiera.

La parola può contenere complessivamente al più 100 caratteri. Il programma deve svolgere le seguenti operazioni:

Visualizzare la parola inserita e la sua lunghezza;

Costruire una nuova parola in cui tutte le vocali siano sostituite con 3 caratteri: la vocale + carattere ‘f’ + la vocale;

Il programma deve memorizzare la nuova parola in una opportuna variabile;

Visualizzare la nuova parola*/

#define MAX 100
#define MAX_NUOVA 300
int main(){
    char parola[MAX], parola_cambiata[MAX_NUOVA];

    printf("Inserisci una stringa: ");
    scanf("%99s", parola);
    char a;
    int i = 0;
    while(parola[i] != '\0'){
        i++;
    }
    printf("Parola inserita: %s\n", parola);

    printf("LUNGHEZZA: %d\n", i);
    i = 0;
    int j = 0;
    
    while(parola[i] != '\0'){
        a = tolower(parola[i]);
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            parola_cambiata[j] = parola[i];
            j++;
            parola_cambiata[j] = 'f';
            j++;
            parola_cambiata[j] = parola[i];
            j++;
            
        }else{
            parola_cambiata[j] = parola[i];
            j++;
        } 
        i++;
    }
    parola_cambiata[j] = '\0';
    printf("%s", parola_cambiata);
}