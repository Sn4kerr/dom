#include <stdio.h>

int y = 1;

void obliczenia(){
    while (y <= 2019) {
        printf("%d\n", y);
        y = y * 2;
    }
}