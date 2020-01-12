#include <stdio.h>
#include <math.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\033[01;33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    double a, b, c;
    double x1, x2, delta, sqrt_delta;

    scanf("%lf %lf %lf", &a, &b, &c);
    printf(ANSI_COLOR_YELLOW);
    printf("podano a, b, c = %.2lf, %.2lf, %.2lf\n", a, b ,c);

    delta = b * b - 4 * a * c;
    sqrt_delta = sqrt(delta);

    x1 = (-b - sqrt_delta) / (2 * a);
    x2 = (-b + sqrt_delta) / (2 * a);
    
    printf(ANSI_COLOR_MAGENTA);
    printf("Policzone pierwiastki: x1 = %lf, x2 = %lf\n", x1, x2);



    //printf(ANSI_COLOR_GREEN "%s ", ANSI_COLOR_YELLOW "Witaj");

    // printf(ANSI_COLOR_MAGENTA);
    // for (int i = 0; i < count; i++)
    // {
        // printf("%s ", name);
    // }
    // printf("\b!\n");
    // printf(ANSI_COLOR_YELLOW);
}