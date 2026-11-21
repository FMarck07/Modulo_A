#include <stdio.h>
#include <string.h>


/*Si scriva un programma C che definisca un tipo di dato Studente.

Ogni studente è caratterizzato da:


matricola (intero);


nome (stringa contenente al più 20 caratteri compreso il terminatore);

cognome (stringa contenente al più 20 caratteri compreso il terminatore).


Il programma acquisisca da tastiera i dati di al massimo 100 studenti salvando le informazioni in un vettore di strutture.

L’inserimento termina quando si inserisce una matricola uguale a 0.

Chieda all'utente il nome e cognome di uno studente, lo cerchi nel vettore e ne stampi la matricola.

ESEMPI DI ESECUZIONE:

Inserire matricola (0 per STOP): 101
Inserire nome: Mario
Inserire cognome: Rossi
Inserire matricola (0 per STOP): 102
Inserire nome: Luca
Inserire cognome: Bianchi
Inserire matricola (0 per STOP): 103
Inserire nome: Giulia
Inserire cognome: Verdi
Inserire matricola (0 per STOP): 0
Inserire nome: Luca
Inserire cognome: Bianchi

MATRICOLA: 102
NOME: Luca
COGNOME: Bianchi
Inserire matricola (0 per STOP): 5055
Inserire nome: Aldo
Inserire cognome: Baglio
Inserire matricola (0 per STOP): 6066
Inserire nome: Giovanni
Inserire cognome: Storti
Inserire matricola (0 per STOP): 0
Inserire nome: Anna
Inserire cognome: Neri

Nessuno studente trovato.*/

#define CHARS 20
#define MAX 100

typedef struct{
    int matricola;
    char nome[CHARS];
    char cognome[CHARS];
}Studente;

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

int main(){
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