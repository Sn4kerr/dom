#include <stdio.h> 
#include <stdlib.h>

// funckje włączenie, wyłączenia konsoli

// C-imperatywny, strukturalny jezyk programowania wysokiego poziomu stworzony na początku lat siedemdziesiątychXX w.
// przez Dennisa Ritchiego do programowania systemów operacyjnych i innych zadań niskiego poziomu.

// komentarz można tez zrobic nie tylko // ale tez /* i kończyć */ i wszystko co jest pomiedzy jest komentarzem nie widać tego w programie

int main()  // jest to funkcja obowiązkowa w całym pliku i zawsze musi istnieć
{
    // najpierw [typ zmiennej] potem [nazwa zmiennej];
    // nazwa zmiennej całym ciągiem znaków ewentualnie podłoga _
    int nazwaZmiennej;
    nazwaZmiennej = 5;
    printf("%d",nazwaZmiennej); // średniki po to żeby czytać tylko jedno polecenie
    return 0; // warto stawiać tabulacje żeby było czytelnie
}