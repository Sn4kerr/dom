#include <stdio.h>

int n =4;

void print_pattern(int gwiazdki, char *pattern){
    for (int i = 0; i < gwiazdki; i++) {
        printf("%s", pattern);
    }
printf("\n");
}

void pattern(){
    for (int i = 0; i < n; i++) {
        print_pattern(8, " *");
        print_pattern(8, "* ");
    }
}
