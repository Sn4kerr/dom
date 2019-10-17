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

Do kopiowania plików słóży polecenie cp (Copy). Możemy utworzyć kopię pliku w tym samym folderze pod nową nazwą

*cp sample.txt new_sample.txt*

Możemy też utworzyć kopię pliku pod tą samą nazwą, ale w podkatalogu:

*cp sample.txt Pictures* - Polecenie skopiuje plik sample do folderu Pictures pod nazwą sample.txt

Możemy też uworzyć kopię pliku, pod nową nazwą, ale w podkatalogu:

*cp sample.txt Pictures/new_sample.txt* - Polecenie skopiuje plik sample do folderu Pictures pod nazwą new_sample.txt

 cp z opcją -rpozwala również kopiować całe foldery:
 
 *cp -r Pictures New_Pictures*

**Przeonoszenie**

Polecenie mv (Move) służy to przeniesienia pliku do innego folderu.

*mv sample.txt Documents*

Można za jego pomocą również zmienić nazwę pliku:

*mv sample.txt new_file.txt*

**Zmiana nazwy katalogu**

W przypadku zmiany nazwy katalogu, również występuje pełna analogia do zmiany nazwy zwykłego pliku, a to dlatego że za tę operację również odpowiada polecenie mv. Zmiana nazwy katalogu/pliku jest tożsama z przeniesieniem go w obrębie tego samego katalogu nadrzędnego, pod inną nazwą. Polecenie takie może wyglądać podobnie do:

*mv dotychczasowaNazwaKatalogu nowaNazwaKatalogu*



