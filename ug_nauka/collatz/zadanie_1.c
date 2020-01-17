/* Napisać program który wypisuje tabelke z problemem collatza, gdzie w pierwszej kolumnie jest liczba od 1 do 100 w drugiej kolumnie opis, że się zgadza
w trzeciej kolumnie liczba kroków jaką trzeba było wykonac aby otrzymać jeden, w czwartej kolumnie wypisać MAX */

#include <stdio.h>

int main(int argc, char *argv[]){

	int n, f, cnt = 0;
	printf("Wpisz liczbę: \n");
  	scanf("%d", &n);
	
	while(n>1)
	{
	if(n%2 == 0)
	 f = n/2;
	else
	f = 3*n+1;
	n = f;
	printf("\n%d " ,n);
	cnt++;
	}
	printf("Trzeba powtórzyć funkcję %d razy, aby otrzymać 1\n", cnt);
}
