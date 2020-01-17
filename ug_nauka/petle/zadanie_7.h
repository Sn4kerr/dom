#include <stdio.h>

#define size 6

double tablica[size];
double dodatnie = 0;
double ujemne = 0;

void liczba(){
    printf("Podaj 6 elementow tablicy:\n");
    for(int i = 0; i < size; i++){
        scanf("%lf", &tablica[i]);
  }
}

void wynik(){
    for (int a = 0; a < 6; a++) {
        float tab = tablica[a];
        if (tab > 0) {
            dodatnie = dodatnie + 1;
        }
        else if (tab <= 0) {
            ujemne = ujemne + 1;
        }
    }
}