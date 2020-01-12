/*
Sprawdź jak zachowują się te funkcję dla zmiennych lokalnych w funkcji main().
Pokaż na przykładzie i spróbuj wyjaśnić dlaczego tak się dzieje.
*/
#include <stdio.h>
#include<stdlib.h>

void f1(int n){
   n++;
}
void f2(int &n){
   n++;
}