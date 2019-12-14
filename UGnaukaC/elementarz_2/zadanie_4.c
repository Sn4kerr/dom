// 4. Zamiast komentarza /** ... */ i kropek ... poniżej wpisz kod, tak aby powstał program zliczający znak
// i odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.

#include <stdio.h>

int main() {
   int nb = 0, nt = 0, nl = 0;
   char c;

   while ((c=getchar()) != EOF) {
      if (c == ' ')
       ++nb;
      else if (c =='\t')
       ++nt;
      else if (c =='\n')
       ++nl;
   }
   printf("liczba znaków odstępu = %d, tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);
}