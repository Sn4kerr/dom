// Napisz program wyświetlający szachownicę
#include <stdio.h>

/*int main()
{
printf("* * * * * * * *\n");
printf(" * * * * * * * *\n");
printf("* * * * * * * *\n");
printf(" * * * * * * * *\n");
printf("* * * * * * * *\n");
printf(" * * * * * * * *\n");
printf("* * * * * * * *\n");
printf(" * * * * * * * *\n");
}*/

void print_row_1()
{
    printf("* * * * * * * *\n");
}

void print_row_2()
{
    printf(" * * * * * * * *\n");
}

void_print_x()
{
    print_row_1();
    print_row_2();
}

int main()
int rows = 4;
for(int i = 1; i <= rows; i++)
{
    printf_layer();
}