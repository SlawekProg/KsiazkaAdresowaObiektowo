
#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
	KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
	ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	//ksiazkaAdresowa.rejestracjaUzytkownika();
	//ksiazkaAdresowa.rejestracjaUzytkownika();
	//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	ksiazkaAdresowa.logowanieUzytkownika();
	ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
	//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	//ksiazkaAdresowa.dodawanieNowegoAdresata();
	//ksiazkaAdresowa.dodawanieNowegoAdresata();
	//ksiazkaAdresowa.dodawanieNowegoAdresata();
	ksiazkaAdresowa.wyswietlWszystkichAdresatow();
	ksiazkaAdresowa.wylogujUzytkownika();

	return 0;
}
