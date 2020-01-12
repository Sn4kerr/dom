/* 1. Poniższy – zawierający wiele błędów – program dla podanej z klawiatury liczby M ma obliczyć najmniejszą liczbę n, taką że
1 + 2 + 3 +...+ n >= M
Popraw wszystkie błędy w tym programie tak, aby poprawiony program prawidłowo obliczał liczbę n. */

#include <stdio.h>
int main() {
  int M;
  int suma = 0;
  int i = 1;
  printf("Podaj liczbe M: ");
  scanf("%f\n", M);
  while (suma < M) 
  {
     suma=suma+i;
     i=i+1;
  }
  int make=i+1;
  printf("Szukane n to: ", n);
  return 0;
}