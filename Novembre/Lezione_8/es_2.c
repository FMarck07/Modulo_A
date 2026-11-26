#include <stdio.h>
#include <string.h>


#define CHARS 20
#define MAX 100

typedef struct{
    int matricola;
    char nome[CHARS];
    char cognome[CHARS];
}Studente;

/**
 * @brief Acquisire da tastiera matricola, nome e cognome di uno studente.
 *
 *
 * @return Restituisce una struttura Studente compilata con i dati letti.
 */
Studente Lettura(){
    Studente s;
    printf("Inserire matricola (0 per STOP): ");
    scanf("%d", &s.matricola);
    
    if (s.matricola != 0) {
        printf("Inserire nome: ");
        scanf("%19s", s.nome);
        printf("Inserire cognome: ");
        scanf("%19s", s.cognome);
    }
    return s;
}

/**
 * @brief Cercare uno studente nell'array in base a nome e cognome.
 *
 * @param array Array delle strutture Studente da esaminare.
 * @param i Numero di studenti memorizzati.
 *
 * @return Restituisce l'indice dello studente trovato oppure -1 se non è presente.
 */
int ricerca(Studente *array, int i){
    Studente s;

    printf("Inserire nome: ");
    scanf("%19s", s.nome);
    printf("Inserire cognome: ");
    scanf("%19s", s.cognome);
    for(int j = 0; j < i; j++){
        if(strcmp((*(array + j)).nome, s.nome) == 0 && strcmp((*(array + j)).cognome, s.cognome) == 0){
            return j;
        }
    }
    return -1;
}

/**
 * @brief Si scriva un programma C che definisca un tipo di dato Studente. Ogni studente è caratterizzato da: matricola (intero); nome (stringa contenente al più 20 caratteri compreso il terminatore); cognome (stringa contenente al più 20 caratteri compreso il terminatore). Il programma acquisisca da tastiera i dati di al massimo 100 studenti salvando le informazioni in un vettore di strutture. L’inserimento termina quando si inserisce una matricola uguale a 0. Chieda all'utente il nome e cognome di uno s
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int i = 0;
    Studente array[MAX], temp;
    temp.matricola = -1;
    while(i < MAX && temp.matricola != 0){
        temp = Lettura();
        if (temp.matricola != 0) {
            array[i] = temp;
            i++;
        }        
    }
    int pos = ricerca(array, i);

    if (pos != -1) {
        printf("\nMATRICOLA: %d\n", array[pos].matricola);
        printf("NOME: %s\n", array[pos].nome);
        printf("COGNOME: %s\n", array[pos].cognome);
    } else {
        printf("\nNessuno studente trovato.\n");
    }
    return 0;
}