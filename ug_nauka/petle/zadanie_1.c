#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 void print_result(int n) 
 {
       printf("\t%2d %6.0lf\n", n, pow(2, n));
 }

int main( int argc, char const *argv[])
{
  
    int upper_limit = atoi(argv[1]);

    printf("Wypisz potęgi 2 nieprzekraczajace %d.\n", upper_limit);
    
    int i = 0;
    while (pow(w,1) <=upper_limit) 
    {
        print_result(i);
        i++;
    }
}
