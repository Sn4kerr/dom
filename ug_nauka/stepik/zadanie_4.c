#include <stdio.h>
#include <stdlib.h>

void podaj_liczbe(){
    int *liczba();
    scanf("%d", *liczba);
}

int main(void)
{
  int *mytab = NULL;
  int n;
  mytab = (int*)malloc(5 * sizeof(int));
  if (mytab == NULL)
  {
    perror("Error in malloc");
    exit (1);
  }
  for(n=0; n<liczba; n++){
      mytab[n] = n;
  }

  for(n=0; n<liczba; n++)
  {
      printf("%d ",mytab[n]);
  }

  putchar('\n');
  free(mytab);
  return EXIT_SUCCESS;
}