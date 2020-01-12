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

## Polecenia: ls, tree, cd 

**ls - wyświetlanie zawartości katalogu**

Wyświetla on informacje dotyczące danego katalogu, a wpisany bez parametrów wyświetla pliki znajdujące się w katalogu, w którym obecnie znajduje się terminal.

| opcja | znaczenie |
| ------------- | ------------- |
| ls -a	| ist all files including hidden file starting with '.'|
| ls --color | colored list [=always/never/auto]|
| ls -d | list directories - with ' /' |
| ls -F | add one char of /=>@| to enteries |
| ls -i	| list file's inode index number|
| ls -l | list with long format - show permissions |
| ls -la |	list long format including hidden files |
| ls -lh |	list long format with readable file size |
| ls -ls |	list with long format with file size |
| ls -r |	list in reverse order |
| ls -R |	list recursively directory tree |
| ls -s |	list file size |
| ls -S |	sort by file size |
| ls -t |	sort by time & date |
| ls -X |	sort by extension name |

**cd - to polecenie powłoki, służące do przemieszczenia się pomiędzy katalogami w systemie operacyjnym. W przypadku użycia bez parametrów, następuje powrót do katalogu domowego (zazwyczaj /home/nazwa_użytkownika lub /root).**

$ cd /home/user/Muzyka – przeniesie nas z katalogu, w którym aktualnie jesteśmy do /home/user/Muzyka

$ cd nazwa_katalogu – przeniesienie do katalogu "nazwa_katalogu" podrzędnego w stosunku do aktualnego

$ cd – podanie bez argumentów przeniesie nas do naszego katalogu domowego

$ cd ../ – polecenie to przeniesie nas do katalogu nadrzędnego

$ cd - – przeniesienie do poprzedniego katalogu bieżącego

**tree – program konsoli Uniksa, wyświetlający strukturę katalogów w formie drzewa. Uruchomiony bez argumentów wyświetla zawartość obecnego katalogu, natomiast po podaniu nazwy katalogu wyświetla jego zawartość.**

| Opcja          |	Znaczenie |
| ------------- | ------------- |
| --help |	Wyświetla rozbudowany komunikat pomocy. |
| --version |	Wyświetla wersję tree. |
| -a |	Wyświetlane są wszystkie pliki. Bez podania tej opcji tree nie wyświetla ukrytych plików (zaczynających się od kropki). |
| -d |	Wyświetla tylko katalogi. |
| -f |	Wyświetlanie pełnej ścieżki dostępu przy plikach. |
| -i |	Nie wyświetla graficznej struktury drzewa (linii wcięcia), co jest przydatne wraz z opcją -f |
| -l |	Podążaj za dowiązaniami symbolicznymi jeżeli prowadzą do katalogów. Dowiązania, które doprowadzają do rekursji są pomijane. |
| -x |	Zmusza tree do poruszania się tylko na obecnym systemie plików. |
| -I | wzorzec	Nie wyświetla plików, które nie pasują do wzorca. |
| --noreport |	Pomija wyświetlania informacji o liczbie znalezionych plików i katalogów na końcu wyniku. |
| -p |	Wyświetla uprawnienia do edycji pliku (tak jak ls -l) |
| -s |	Wyświetla rozmiar pliku obok jego nazwy. |
| -u |	Wyświetla nazwę lub numer UID właściciela pliku. |
| -g |	Wyświetla nazwę lub numer GID grupy właściciela pliku. |
| -D |	Wyświetla datę ostatniej modyfikacji przy nazwie pliku. |
| --inodes |	Wyświetla numer i-węzła do którego należy dany plik.każdego pliku? |
| --device |	Wyświetla numer urządzenia, do którego należy plik lub katalog. |
| -F |	Dodaje / do nazw katalogów, = – dla plików socket, * do nazw plików wykonywalnych oraz | dla potoków FIFO, tak jak w ls -F. |
| -q |	Wyświetla znaki niedrukowalne jako pytajniki. |
| -N |	Nie zmienia sposobu wyświetlania znaków niedrukowalnych. |
| -r |	Sortuje wynik w odwrotnej kolejności. |
| -t |	Sortuje wynik w kolejności ostatniej edycji, zamiast alfabetycznie. |
| --dirsfirst |	Wyświetla katalogi przed plikami. |
| -n |	Wyłącza koloryzację wyniku. |
| -C | 	Włącza koloryzację wyniku. Używa domyślnych wbudowanych kolorów jeżeli zmienna środowiskowa LS_COLORS nie jest ustawiona. |
| -A |	Włącza alternatywny (niestandardowy) sposób druku graficznej reprezentacji wyniku, korzystając z grafik liniowych ANSI. |
| -S |	Włącza grafiki liniowe ASCII. Jest to równoważne z opcją --charset=IBM437. |
| -L | głębia	Ustawia maksymalną głębię (liczbę poziomów katalogów, do których wejdzie tree) |
| -R |	Po wejściu w każdy nowy poziom katalogów, tree wywołuje nową instancję dodając opcję -o 00Tree.html. |
| -H | baza	Wyświetla wynik w formacie HTML, włączając w to odwołania HTTP. Jest to przydatne dla wyświetlania zawartości folderów w FTP. Baza oznacza bazową część adresu FTP. (np. ftp://jakis.serwer.ftp.com/) Aby dołączyć kolorowanie za pomocą stylów CSS należy normalnie dodać opcję -C. |
| -T | tytuł	Ustawia tytuł, a także wpisuje go w znacznikach h1. |
| --charset | kodowanie	Ustawia kodowanie dla wyniku w formacie HTML. |
| --nolinks |	Nie tworzy hiperłączy w wyniku. |
| -o | plik	Zapisuje wynik do pliku. |









