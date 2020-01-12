/* 4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do 
liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę 
mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie. */

#include <stdio.h>

int main()
{
  int max_number = 0;

  printf("podaj liczbe z gornej granicy do sumowania\n");
  scanf("%d", &max_number);

  if(max_number < 1)
  {
    printf("nieprawidlowa liczba\n");
  } else {
    int result = 0;
    for(int i = 1; i <= max_number; i++)
    {
      result += i;
    }
    printf("suma kolejnych liczb naturalnych od 1 do %d = %d\n", max_number, result);
  }
}
