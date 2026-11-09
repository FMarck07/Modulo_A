#include <stdio.h>
#include <string.h>

// Definizione della struct per la data
typedef struct {
    int giorno;
    int mese;
    int anno;
} Data;

// Definizione della struct per la persona
typedef struct {
    char nome[50];
    Data data_nascita;
} Persona;

int main(void) {
    // Data di oggi (es. 15 maggio 2024)
    Data oggi = {15, 5, 2024};

    // Creazione di una persona con data di nascita
    Persona p1;
    strcpy(p1.nome, "Marco");
    p1.data_nascita.giorno = 15;
    p1.data_nascita.mese = 5;
    p1.data_nascita.anno = 1998;

    printf("Oggi e' il: %02d/%02d/%d\n", oggi.giorno, oggi.mese, oggi.anno);
    printf("Persona: %s (Nato il %02d/%02d/%d)\n\n", 
           p1.nome, p1.data_nascita.giorno, p1.data_nascita.mese, p1.data_nascita.anno);

    // Per il compleanno si confrontano solo giorno e mese (non l'anno)
    if (p1.data_nascita.giorno == oggi.giorno && p1.data_nascita.mese == oggi.mese) {
        int eta = oggi.anno - p1.data_nascita.anno;
        printf("Buon compleanno %s! Oggi compi %d anni!\n", p1.nome, eta);
    } else {
        printf("Oggi non e' il compleanno di %s.\n", p1.nome);
    }

    return 0;
}
