#include <stdio.h>
#include <stdlib.h>

void wypisz_tablice(int *tab, int n){
    for(int i=0; i<n; i++){
        printf("%d")
    }
}

int main(){
    int tab[10]; //statyczna tablica jednowymiarowa
    int *tab2
    tab2 = malloc(10*sizeof(int));
    if(tab2 == NULL){
        perror("error in malloc");
        return 1;
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d", &tab2[i]);
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d", &tab2[i]);
    }
    purchar('\n');
    free(tab2);
    return 0;
}