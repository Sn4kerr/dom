#include <stdio.h>

int min_number = 0;
int max_number = 0;

void liczby(){
    printf("Podaj liczbe z dolnej granicy.\n");
    scanf("%d", &min_number);
    printf("Podaj liczbe z gornej granicy.\n");
    scanf("%d", &max_number);
}

void zakres(){
    if(min_number > max_number){
    printf("Nieprawidłowy zakres liczb.\n");
} 
else{
    printf("Podaje liczby z zakresu miedzy %d, a %d:\n", min_number, max_number);
    while(min_number < max_number-1){
        min_number ++;
        printf("%d\n", min_number);
    }
}
}