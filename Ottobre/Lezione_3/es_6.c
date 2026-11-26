#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Si scriva un programma che calcoli la bolletta elettrica dei clienti di una società di fornitura. Il programma prende in ingresso il numero di kilowattora (kWh) consumati dall'utente nell'ultimo mese e restituisce la cifra dovuta in euro. Per educare le famiglie a un consumo consapevole dell'energia elettrica la società ha deciso che il costo per kWh cambia in base al consumo mensile come segue: i primi 200 kWh costano 1 euro/kWh i kWh dal 201esimo fino al 401esimo costano 2 euro/kWh i kWh dal 4
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    float kwh, spesa = 0;
    do{
        printf("Inserire consumo in kWh: ");
        scanf("%f", &kwh);
    }while(kwh <= 0);
    
    if(kwh > 600){
        spesa+= (kwh-600)*4;
        kwh = 600;
    }
    if(kwh >= 400){
        spesa+= (kwh-400)*3;
        kwh = 400;
    }if(kwh >= 200){
        spesa+= (kwh-200)*2;
        kwh = 200;
    }
    
    spesa += kwh;
    

    printf("Spesa: %.0f", spesa);

    return 0;
}