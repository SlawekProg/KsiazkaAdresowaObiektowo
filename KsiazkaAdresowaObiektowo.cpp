
#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
	KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
	ksiazkaAdresowa.rejestracjaUzytkownika();
	ksiazkaAdresowa.rejestracjaUzytkownika();
	ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	ksiazkaAdresowa.logowanieUzytkownika();
	//ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
	//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	ksiazkaAdresowa.dodawanieNowegoAdresata();
	ksiazkaAdresowa.dodawanieNowegoAdresata();
	ksiazkaAdresowa.dodawanieNowegoAdresata();
	ksiazkaAdresowa.wyswietlWszystkichAdresatow();
	ksiazkaAdresowa.wylogujUzytkownika();
	ksiazkaAdresowa.wyswietlWszystkichAdresatow();

	return 0;
}
