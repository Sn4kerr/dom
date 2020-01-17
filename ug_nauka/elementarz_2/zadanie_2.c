 /*
 2. Zamiast komentarzy / ... / w programie poniżej wpisz kod tak, aby powstał program,
 który sprawdza czy podana liczba całkowita jest pierwsza.
 */

#include "zadanie_2.h"

int main() {

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);

    niePierwsza();

    if( n==i ){
        printf("Podana liczba %d jest pierwsza\n", n);
    }
}