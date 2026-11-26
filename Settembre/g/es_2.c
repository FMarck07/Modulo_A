#include <stdio.h>


/**
 * @brief Calcolare il prodotto di due numeri interi.
 *
 * @param n1 Primo fattore.
 * @param n2 Secondo fattore.
 *
 * @return Restituisce il prodotto dei due fattori.
 */
int calcola_prodotto(int n1, int n2){
    return n1 * n2;
}

/**
 * @brief Progettare un algoritmo che effettui le seguenti operazioni: • continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è 0 (zero) • per ogni coppia di numeri letti: ◦ calcoli il prodotto dei due numeri e ne stampi il valore ◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti • all’uscita del ciclo, stampi il valore della somma
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int n1, n2, prodotto, somma = 0;

    do{
        printf("Inserisci due numeri\n");
        printf("Primo numero: ");
        scanf("%d", &n1);
        printf("Secondo numero: ");
        scanf("%d", &n2);
        prodotto = calcola_prodotto(n1, n2);
        somma+= prodotto; 
        printf("Prodotto dei due numeri: %d, %d = %d\n", n1, n2, prodotto);
        
    }while(n1 != 0 || n2 != 0);
    printf("Somma dei valori: %d", somma);
    return 0;
}

