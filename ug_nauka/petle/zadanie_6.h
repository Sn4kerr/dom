#include <stdio.h>
#include <stdlib.h>

#define size 6

double tablica[size];
double minNumber = tablica[0];
double maxNumber = tablica[0];

void liczba(){
    printf("Podaj 6 elementow tablicy: \n");
    for(int i = 0; i < size; i++){
        scanf("%lf", &tablica[i]);
    }
}


void obliczenia(){
    for (int a = 0; a < size; a++) {
        double tab = tablica[a];
        if (tab > maxNumber) {
            maxNumber = tab;
        }
        else if (tab < minNumber) {
            minNumber = tab;
        }
    }
}

void wynik(){
    printf("min = %.2lf\nmax = %.2lf\n", minNumber, maxNumber);
}
