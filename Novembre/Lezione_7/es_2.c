#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAX 100
#define MAX_NUOVA 300
/**
 * @brief Scrivere un programma C che legga una parola introdotta da tastiera. La parola può contenere complessivamente al più 100 caratteri. Il programma deve svolgere le seguenti operazioni: Visualizzare la parola inserita e la sua lunghezza; Costruire una nuova parola in cui tutte le vocali siano sostituite con 3 caratteri: la vocale + carattere ‘f’ + la vocale; Il programma deve memorizzare la nuova parola in una opportuna variabile; Visualizzare la nuova parola
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
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