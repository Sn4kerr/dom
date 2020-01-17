#include <stdio.h>

int max_number = 0;

void liczba(){
    printf("Podaj liczbe z gornej granicy do sumowania\n");
    scanf("%d", &max_number);
 }

 void wynik(){
    if(max_number < 1){
    printf("nieprawidlowa liczba\n");
  }
  else{
    int result = 0;
    for(int i = 1; i <= max_number; i++){
      result += i;
    }
    printf("Suma kolejnych liczb naturalnych od 1 do %d = %d\n", max_number, result);
  }
 }