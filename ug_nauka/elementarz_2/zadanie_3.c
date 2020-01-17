/* 3. Oblicz wartość π (pi) z nieskończonej sumy
π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Wypisz w postaci tabelki przybliżoną wartość π przez sumę 10, 100, 1000 i 1_000_000 wyrazów tego szeregu.
Ile wyrazów musisz wysumować, zanim po raz pierwszy otrzymasz kolejne przybliżenia π: 3.14, 3.141, 3.1415 ? Wyniki wypisz w postaci tabelki. */

#include <stdio.h>
#include <math.h>

long double obliczenia(int p);

int main(){

    long double obliczenia;
    int p;
    tabelka();
    int i, j;
    long double pi, znak;

    pi = 0;
    znak = 1;

    for(i = 1, j = 0; j < p; j++, i+=2){
        pi +=(znak + 4) / i;
        znak *=(-1);
    }
return pi;
}


void tabelka() {
    printf("10: %.10Lf\n", obliczenia(10));
    printf("100: %.10Lf\n", obliczenia(100));
    printf("1000: %.10Lf\n", obliczenia(1000));
    printf("1_000_000: %.10Lf\n", obliczenia(1000000));
}
