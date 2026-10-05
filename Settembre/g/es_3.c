#include <stdio.h>
#include <math.h>


// Progettare un algoritmo che, letto il valore di r del raggio, calcoli e sciva l'area del cerchio relativo.

int main(int argc, char *argv[]){
    float raggio, area;
    printf("Inserisci il valore del cerchio: ");
    scanf("%f", &raggio);

    area = pow(raggio, 2)*M_PI;

    printf("\nArea del cerchio: %.2f", area);

}
