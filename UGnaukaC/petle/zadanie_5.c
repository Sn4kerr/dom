/*  5. Napisz program, który wczyta ze stdin 6 liczb całkowitych
do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca. */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  for(int i = 1; i < argc; i++)
  {
    printf("liczba %d : %s\n", i, argv[i]);
  }
/*
  lub
  int number_array[6];

  printf("podaj szesc kolejnych liczb calkowitych\n");
  scanf("%d %d %d %d %d %d", &number_array[0], &number_array[1], &number_array[2], &number_array[3], &number_array[4], &number_array[5]);

  for(int i = 0; i < 6; i++)
  {
    printf("liczba %d z tablicy %d\n", i+1, number_array[i]);
  }
*/
}