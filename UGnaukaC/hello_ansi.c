#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\033[01;33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    char * name = "Damian"; //Tworzy zmienną char i rezerwuje pamięć na tyle rzeczy ile podasz i w name umieszcza ten adres
    // char * name = [32 + 1];
    int count = 3;

    // scanf("%d", &count);
    // scanf("%s", name); //scanf("%s"); do wcyztywania tego co jest na kalwiaturze służy funkcja scan

    printf("%s ", "Witaj");
    for (int i = 0; i < count; i++)
    {
        printf("%s ", name);
    }
    printf("\b!\n");
}