#include <stdio.h>

int main()
{
    char * name = "Damian"; //Tworzy zmienną char i rezerwuje pamięć na tyle rzeczy ile podasz i w name umieszcza ten adres
    // char * name = [32 + 1];
    int count = 3;

    // scanf("%d", &count);
    // scanf("%s", name); //scanf("%s"); do wcyztywania tego co jest na kalwiaturze służy funkcja scan

    printf("\033[0;31m");
    printf("%s ", "Witaj");
    for (int i = 0; i < count; i++)
    {
        printf("\033[01;33m");
        printf("%s ", name);
    }
    printf("\b!\n");
}