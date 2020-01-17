#include "ansi.h"

int main()
{
    char name[100];
    int count = 0;

    printf("\033[01;33m" "Podaj imię:\n");
    scanf("%s", name);

    printf("\033[01;33m" "Ila razy ma być powtórzone imię?\n");
    scanf("%d", &count);

    printf("%s\n", "Witaj");
    for (int i = 0; i < count; i++){
        printf("\x1b[32m" "%s ", name);
    }
    printf("\b!\n");
}