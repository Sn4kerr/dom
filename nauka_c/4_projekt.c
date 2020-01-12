#include <stdio.h>
#include <stdlib.h>

int a=2, b=2, c=2, d=2, e=2;  // zmienne tego samego typu można pisać w jenej lini

int main()
{
	// robienie operacji
	a=a+2; // skrócony zapis a+=2; przeskok o 1 a++ dekrementacja
	b=b-2; // skrócony b-=2; przeskok o -1 b--
	c=c*2; // skrócony c*=2
	d=d/2; // skrócony d/=2
	e=e%2; // skrócony e%=2, wynik reszty z dzielenia
	
	printf("Wynik dodawania = %d\n",a);
	printf("Wynik odejmowania = %d\n", b);
	printf("Wynik mnozenia = %d\n", c);
	printf("Wynik dzielenia = %d\n", d);
	printf("Wynik reszty z dzielenia = %d\n", e);
	return 0;
}