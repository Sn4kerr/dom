#include <stdio.h>
#include <math.h>

int main()
{
    int N = 100;
    int exponent = 10;

    double S_4 = 0;

    for (int i = 1; i <= N; i++)
    {
        S_4 = S_4 + pow(i, exponent);
       // printf("%.0lf ", pow(i, 4)); 
       //pow działa tylko no double więc oszukane %.0lf 
    }
    printf("\n");

    printf("%.0f\n", S_4);