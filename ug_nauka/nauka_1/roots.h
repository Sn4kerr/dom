#include "ansi.h"
#include <math.h>

double a, b, c;
double x1, x2, delta, sqrt_delta;
double delta, sqrt_delta;

void pytania(){
     printf(ANSI_COLOR_YELLOW "Podaj liczbę a:\n");
    scanf("%lf", &a);
    printf(ANSI_COLOR_YELLOW "Podaj liczbę b:\n");
    scanf("%lf", &b);
    printf(ANSI_COLOR_YELLOW "Podaj liczbę c:\n");
    scanf("%lf", &c);
}

void obliczenia(){
    delta = (b * b) - (4 * a * c);
    sqrt_delta = sqrt(delta);
    x1 = (-b - sqrt_delta) / (2 * a);
    x2 = (-b + sqrt_delta) / (2 * a);
}

void warunek(){
    if(delta < 0){
        printf(ANSI_COLOR_RED "Delta mniejsza od zera.\n");
        printf(ANSI_COLOR_RED "Delta nie posiada pierwiastków.\n");
    }
}

void wynik(){
    printf(ANSI_COLOR_YELLOW "Podane liczby to: %.0lf, %.0lf, %.0lf\n", a, b, c);
    printf(ANSI_COLOR_RED "Delta wynosi: %.2lf\n", delta);
    printf(ANSI_COLOR_GREEN "Pierwiastek z delty wynosi: %.2lf\n", sqrt_delta);
    printf(ANSI_COLOR_MAGENTA "Pierwiastki z delty wynoszą: %.2lf, %.2lf\n", x1, x2);
}

