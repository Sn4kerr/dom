#include <stdio.h>

int nb = 0, nt = 0, nl = 0;
char c;

void znaki(){
    while ((c=getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c =='\t')
            ++nt;
        else if (c =='\n')
            ++nl;
    }
}