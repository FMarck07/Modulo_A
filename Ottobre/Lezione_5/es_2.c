#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Verificare se tre valori interi soddisfano la condizione di disuguaglianza.
 *
 * @param a Primo valore intero.
 * @param b Secondo valore intero.
 * @param c Terzo valore intero.
 *
 * @return Restituisce 1 se i valori sono disuguali, altrimenti 0.
 */
int disuguaglianza(int a, int b, int c){
    if(a <= b + c)
        return 1;
    return 0;
}


/**
 * @brief Codificare in C la funzione int disuguaglianza(int a, int b, int c) che restituisce: 1 se vale la disuguaglianza triangolare a <= b + c 0 altrimenti. SCRIVERE SOLO LA FUNZIONE SUGGERIMENTO: un triangolo sarà costruibile solamente se ogni suo lato è minore (o uguale) della somma degli altri due. Non è necessario effettuare un controllo sull’input.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    float a, b, c;
    printf("Inserisci a:");
    scanf("%f", &a);

    printf("\nInserisci b:");
    scanf("%f", &b);

    printf("\nInserisci c:");
    scanf("%f", &c);
    
    if(disuguaglianza(a, b, c)) 
        printf("OK");
    else printf("NO");


    return 0;
}