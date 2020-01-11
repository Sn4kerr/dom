#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *mytab;
  int *mytabTemp;
  int n = 0;
  mytab = (int*)malloc(5 * sizeof(int));
  mytabTemp = mytab;
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }

  while(mytab && n < 5){
    printf("%p ",mytab);
    mytab++;
    n++;
  }
  putchar('\n');
  mytab = mytabTemp;
  free(mytab);
  return EXIT_SUCCESS;
}