 /* 2. Zamiast komentarzy / ... / w programie poniżej wpisz kod tak, aby powstał program, który sprawdza czy podana liczba całkowita jest pierwsza. */

#include<stdio.h>

int main()
{
  int liczba, i;

  printf("Podaj liczbe calkowita:");
  scanf("%d", &liczba);

  for(i = 2; i < liczba; i ++){
      if(liczba % i == 0) {
          printf("%d nie jest pierwsza\n", liczba);
      }
  }
      if(liczba == i) {
          printf("podana liczba %d jest pierwsza\n", liczba);
  }
}