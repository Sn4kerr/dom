#include <stdio.h>

int n, i;

void niePierwsza(){
    for(i = 2; i < n; i++){
        if(n%i == 0){
            printf("%d nie jest pierwsza\n", n);
            return;
        }
    }
}