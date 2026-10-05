#include <stdio.h>

/*Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
• per ogni coppia di numeri letti:
◦ calcoli il prodotto dei due numeri e ne stampi il valore
◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma*/

int calcola_prodotto(int n1, int n2){
    return n1 * n2;
}

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


