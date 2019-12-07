#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int counter = 0;
  double number;

  for(int i = 1; i < argc; i++)
  {
    number = atof(argv[i]);
    if(number > 0)
    {
      counter ++;
    }
  }
  printf("Sposrod podanych liczb %d jest dodatnich \n", counter);
}