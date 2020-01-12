/*
Wzorując się na przykładzie napisz program, który pobierze liczbę naturalną n n.
Następnie stworzy dynamiczną tablicę n n-element-ową i wypełni ją liczbami
od 1,\dots,n 1,…,n. Następnie program ma wypisać tę tablicę na ekranie.
W przypadku sytuacji błędnych program ma wypisać komunikat BŁĄD oraz zakończyć działanie.
*/

#include <stdio.h>
#include <stdlib.h>

/*void podaj_liczbe(){
    int n;
    scanf("%d", &n);
}*/

int main(){
    int *mytab = NULL;
    int i;
    int n;
    printf("podaj liczbę:\n");
    scanf("%d", &n);
    mytab = (int*)malloc(5 * sizeof(int));
    if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }
    for(i=1; i<n; i++){
        mytab[i] = i;
    }
    for(i=1; i<n; i++){
        printf("%d", mytab[i]);
    }
    putchar('\n');
    free(mytab);
    return EXIT_SUCCESS;
}
