#include <stdio.h>
#include <stdlib.h>

#define size 6

int tab[size];
int i;

void elementyTablicy(){
    printf("Podaj 6 elementow tablicy:\n");
    for(i = 0; i < size; i++){
        scanf("%d", &tab[i]);
    }
}

void poczatek(){
    printf("Elementy tablicy od poczatku: \n");
    for(i = 0; i < size; i++){
        printf("%d\n", tab[i]);
    }
}

void koniec(){
    printf("Elementy tablicy od konca: \n");
    for(i = size-1; i >= 0; i--){
        printf("%d\n", tab[i]);
    }
}