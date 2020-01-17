/* 
Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).
*/

#include <stdio.h>

int potega(int n, int k){
    if(k == 0){
        return 1;
    } 
    else {
        return n * potega(n, k - 1);
    }
}

int main(){

    int liczba = 0;
    int wykladnik = 0;

    printf("Podaj liczbę do potęgowania: \n");
    scanf("%d", &liczba);
    
    printf("Do jakiej potęgi ma zostać podniesiona liczba: \n");
    scanf("%d", &wykladnik);
    
    printf("Wynikiem potęgowania jest %d^%d = %d\n", liczba, wykladnik, potega(liczba, wykladnik));
}