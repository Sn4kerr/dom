/*
Korzystając z twierdzenia Euklidesa, napisać program obliczający 
rekurencyjnie największy wspólny dzielnik z liczb podanych na wejściu.
*/

#include <stdio.h>

int nwd(int a,int b){
    int c;
    while(b != 0){ 
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){

  int a = 0;
  int b = 0;
  
  printf("Podaj dwie liczby:\n");
  scanf("%d %d", &a, &b);
  printf("nwd(%d,%d) = %d\n", a, b, nwd(a,b));
}