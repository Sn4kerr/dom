/* 3. Napisz program, który wczyta dwie liczby całkowite a i b 
(a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy 
a i b. */

#include <stdio.h>

int main()
{
  int min_number = 0;
  int max_number = 0;

  printf("podaj liczbe z dolnej granicy\n");
  scanf("%d", &min_number);
  printf("podaj liczbe z gornej granicy\n");
  scanf("%d", &max_number);

  if(min_number > max_number)
  {
    printf("nieprawidłowy zakres liczb\n");
  } else {
    printf("podaje liczby z zakresu miedzy %d a %d\n", min_number, max_number);

    while(min_number < max_number-1)
    {
      min_number ++;
      printf("%d\n", min_number);
    }
  }
}