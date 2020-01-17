/*
Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k, 
czyli liczbę podzbiorów k-elementowych zbioru n-elementowego.
*/

#include <stdio.h>

int C(int n, int k){
    if(k == 0 || k == n){
        return 1;
    } 
    else{
        return C(n - 1, k - 1) + C(n - 1, k);
    }
}   

int main(){

    int n = 0;
    int k = 0;

    printf("Aby obliczyć współczynnik Newtona podaj n:\n");
    scanf("%d", &n);

    printf("Aby obliczyć współczynnik Newtona podaj k:\n");
    scanf("%d", &k);
    
    printf("C(%d, %d) = %d\n", n, k, C(n, k));


}