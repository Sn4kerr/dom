## Katalog domowy pwd, ~
**pwd** - za pomocą polecenia pwd możemy wyświetlić informację, gdzie jesteśmy. To znaczy ścieżkę do katalogu, w którym aktualnie się znajdujemy.

**~** - przenosi do katalogu domowego ( przed tym stawiamy cd)

## Pliki: tworzenie, usuwanie, przenoszenie, kopiowanie, zmiana nazwy.

**Tworzenie**

Aby utworzyć nowy katalog, należy posłużyć się poleceniem mkdir.

Na przykład

*mkdir nowyKatalog*

**Usuwanie**

 Gdy interesuje nas usunięcie istniejącego już katalogu, musimy wydać polecenie **rmdir**. Katalog taki koniecznie musi być pusty. Dlatego jeśli znajdują się w nim jakieś pliki, należy je usunąć przy pomocy polecenia rm -r (flaga r oznacza rekursywne usuwanie plików).
 
 Przykład:
 
*rm -r istniejacyKatalog*

*rmdir istniejacyKatalog*

**Kopiowanie** 

Kopiowanie katalogów, polega na rekursywne przekopiowaniu plików. Zatem wystarczy wydać polecenie:

*cp -r katalogŹródłowy katalogDocelowy*



