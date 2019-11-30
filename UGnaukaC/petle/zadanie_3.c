/* 3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) 
    a następnie wypisze wszystkie liczby całkowite pomiędzy a i b. */

#include <stdio.h>

int main ()
{
    int a = 0;
    int b = 0;
    
    {
        printf("podaj liczbę a: ");
        scanf("%d", &a);
        printf("podaj liczbę b: ");
        scanf("%d", &b);

        printf("-------------\n");

        if (a<b)
        {
            while (a<=b) 
            {
                printf("%d\n", a);
                a += 1;
            }
        }else
            {
                printf("liczb b jest większa od a\n");
            }
        }
}