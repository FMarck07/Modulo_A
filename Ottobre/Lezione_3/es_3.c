#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Verificare se i tre numeri soddisfano la condizione prevista dall'esercizio.
 *
 * @param a Primo numero intero.
 * @param b Secondo numero intero.
 * @param c Terzo numero intero.
 *
 * @return Restituisce un valore che indica l'esito della verifica.
 */
int prova(int a, int b, int c){
    if(pow(a, 2) + pow(b, 2) == pow(c, 2) || 
    pow(c, 2) + pow(b, 2) == pow(a, 2) || 
/**
 * @brief Eseguire l'elaborazione prevista da questa funzione sui dati forniti.
 *
 * @param a Valore utilizzato dalla funzione nell'elaborazione.
 * @param c Valore utilizzato dalla funzione nell'elaborazione.
 * @param b Valore utilizzato dalla funzione nell'elaborazione.
 *
 * @return Restituisce il risultato calcolato dalla funzione.
 */
    pow(a, 2) + pow(c, 2) == pow(b, 2)){
        return 1;
    }else return 0;
}

/**
 * @brief Scrivere un programma che legga da tastiera le tre lunghezze dei lati di un triangolo (detti A , B e C ). Il programma deve determinare se il triangolo è: Equilatero; Isoscele; Scaleno; Rettangolo. Se il triangolo rispetta più caratteristiche contemporaneamente, devono essere mostrate tutte. SUGGERIMENTO: Un triangolo equilatero è anche isoscele, mentre (utilizzando solamente valori interi per la misura dei lati) solo i triangoli scaleni possono essere rettangoli. Prestare molta attenzione alla
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int a, b, c;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if(a == b && a == c){
        printf("ISOSCELE\n");
        printf("EQUILATERO");
    }else if(a == b || b == c || c == a){
        printf("ISOSCELE");
    }else{
        printf("SCALENO\n");
        if(prova(a, b, c) == 1){
            printf("RETTANGOLO");
        }        
    }

    return 0;
}