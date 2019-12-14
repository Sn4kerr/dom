#include <stdio.h>
#include <stdlib.h>

// TYPY DANYCH

// Przed każdym typem danych można dopisac 'unsogned' wtedy przyjmujemy, że nie używamy liczb ujemnychi zwiększa sienasz zkares liczb dodatnich.
// Polega to na tym że liczby z zakresu [-] przechodzą na [+] i mamy większy zakres, ale bez minusów..
// możemy go dodać do każdego typu danych 

// [-128, +127] lub [0, 255]
unsigned char znak = 'A';  //znak można wstawić znak miedzy apostrofami '' odczytywany jest ten na końcu
// jego rozmiar to 1 bajt

// [-32,768, +32,767] lub [0, 65, 535]
short krotki; // jego wartość to już dwa bajty i przedział tak jak wyżej

// [-2, 147, 483, 648 to 2, 147 ,483, 647] lub [0, 4, 294, 967, 295]
int calkowite; // zapisany jest na 4 bajtach

// [-2,147,483,648, +2,147,483,647] lub [ 0,4,294,967,295]
long dlugi; // to samo co int, kwestia systemu opreacyjnego

// ZMIENNO PRZECINKOWE

//Można zapisać liczby po przecinku, gdzie w powyższych nie można 
// float zapisuje na 4 bajtach, a double zapisuje na 8, przez co jest bardziej dokładny

float zmiennoPrzecinkowe = 3.14;
double podwojnejPrecyzji = 3.14;



int main()
{
	printf("char (wartosc)=%d, znak=%c, rozmiar=%d\n", znak,znak, sizeof(znak));
	printf("short=%d, rozmair=%d\n", krotki, sizeof(krotki));
	printf("int=%d, rozmiar=%d\n", calkowite, sizeof(calkowite));
	printf("long=%d, rozmiar=%d\n\n", dlugi, sizeof(dlugi));
	printf("float=%f, rozmiar=%d\n", zmiennoPrzecinkowe, sizeof(zmiennoPrzecinkowe));
	printf("double=%f, rozmiar=%d\n", podwojnejPrecyzji, sizeof(podwojnejPrecyzji));
	return 0;
}
