#include <stdio.h>
#include <stdlib.h>

int main(void){
  int **mytab;
  int n,k;
  mytab = (int**)malloc(5 * sizeof(int*));
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }
  for (n=0; n<5; n++){
    mytab[n] = (int*)malloc(2 * sizeof(int));
    if(mytab[n] == NULL){
      perror("Error in malloc2");
      exit (1);
    }
  }
  for (n=0; n<5; n++){
    for (k=0; k<2; k++){
      printf("%p ",*(mytab+k)+n);
    }
    putchar('\n');
  }

  for (n=0; n<5; n++){
      free(mytab[n]);
  }
  free(mytab);
  putchar('\n');
  return EXIT_SUCCESS;
}