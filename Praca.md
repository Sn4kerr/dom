## Katalog domowy pwd, ~
**pwd** - za pomocą polecenia pwd możemy wyświetlić informację, gdzie jesteśmy. To znaczy ścieżkę do katalogu, w którym aktualnie się znajdujemy.

**~** - przenosi do katalogu domowego ( przed tym stawiamy cd)

## Pliki: tworzenie, usuwanie, przenoszenie, kopiowanie, zmiana nazwy.

**Tworzenie Katalogu**

Aby utworzyć nowy katalog, należy posłużyć się poleceniem mkdir.

Na przykład

*mkdir nowyKatalog*

**Tworzenie pliku**

Plik tworzymy za pomocą polecenia touch

Na Przykład

*touch new_file.txt*

**Usuwanie**

 Gdy interesuje nas usunięcie istniejącego już katalogu, musimy wydać polecenie **rmdir**. Katalog taki koniecznie musi być pusty. Dlatego jeśli znajdują się w nim jakieś pliki, należy je usunąć przy pomocy polecenia rm -r (flaga r oznacza rekursywne usuwanie plików).
 
 Przykład:
 
*rm -r istniejacyKatalog*

*rmdir istniejacyKatalog*

**Kopiowanie** 

Kopiowanie katalogów, polega na rekursywne przekopiowaniu plików. Zatem wystarczy wydać polecenie:

*cp -r katalogŹródłowy katalogDocelowy*

**Przeonoszenie**

Za przeniesienie katalogu do innej ścieżki, odpowiada to samo polecenie, którym przenosimy pliki - mv. Przykładowa komenda zlecająca przeniesienie katalogu może więc wyglądać następująco:

*mv obecnaLokacjaKatalogu nowaLokacjaKatalogu*

**Zmiana nazwy katalogu**

W przypadku zmiany nazwy katalogu, również występuje pełna analogia do zmiany nazwy zwykłego pliku, a to dlatego że za tę operację również odpowiada polecenie mv. Zmiana nazwy katalogu/pliku jest tożsama z przeniesieniem go w obrębie tego samego katalogu nadrzędnego, pod inną nazwą. Polecenie takie może wyglądać podobnie do:

*mv dotychczasowaNazwaKatalogu nowaNazwaKatalogu*



