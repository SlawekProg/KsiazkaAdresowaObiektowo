
#include <iostream>
#include <vector>

#include "KsiazkaAdresowa.h"



using namespace std;

int main()
{
	KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
	ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	ksiazkaAdresowa.logowanieUzytkownika();
	//ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
	//ksiazkaAdresowa.rejestracjaUzytkownika();
	//ksiazkaAdresowa.rejestracjaUzytkownika();
	//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
	ksiazkaAdresowa.wylogujUzytkownika();
	return 0;
}
