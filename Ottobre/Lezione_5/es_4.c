#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


/**
 * @brief Convertire uno stipendio da euro in sterline.
 *
 * @param stipendio Importo in euro da convertire.
 *
 * @return Restituisce l'importo convertito in sterline.
 */
float EuroSterlina(int stipendio){
    return stipendio * 0.91;
}

/**
 * @brief Convertire uno stipendio da euro in yen.
 *
 * @param stipendio Importo in euro da convertire.
 *
 * @return Restituisce l'importo convertito in yen.
 */
float EuroYen(int stipendio){
    return stipendio * 124.09;
}