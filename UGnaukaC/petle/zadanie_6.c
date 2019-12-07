#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  double max = atof(argv[1]);
  double min = atof(argv[1]);
  double number;

  for(int i = 2; i < argc; i++)
  {
    number = atof(argv[i]);
    if(number < min)
    {
      min = number;
    }
    if (number > max)
    {
      max = number;
    }
  }
  printf("Najwieksza liczba sposrod podanych to %lf\nNajmniejsza liczba sposrod podanych to %lf\n", max, min);
}