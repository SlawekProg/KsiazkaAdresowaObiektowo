
#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
	KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
	char wybor = '0';
	while (true)
	{
		if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
		{
			wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

			if (wybor == '1') ksiazkaAdresowa.rejestracjaUzytkownika();
			else if (wybor == '2') ksiazkaAdresowa.logowanieUzytkownika();
			else if (wybor == '9') exit(0);
		}
		else
		{
			while (true)
			{
				wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

				if (wybor == '1') ksiazkaAdresowa.dodawanieNowegoAdresata();
				else if (wybor == '2') ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
				else if (wybor == '3') ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
				else if (wybor == '4') ksiazkaAdresowa.wyswietlWszystkichAdresatow();
				else if (wybor == '5') ksiazkaAdresowa.usunAdresata();
				else if (wybor == '6') ksiazkaAdresowa.edytujAdresata();
				else if (wybor == '7') ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
				else if (wybor == '8') { ksiazkaAdresowa.wylogujUzytkownika(); break; }
			}
		}
	}
	return 0;
}