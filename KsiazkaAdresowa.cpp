
#include "KsiazkaAdresowa.h"

using namespace std;


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
	uzytkownikMenadzer.rejestracjaUzytkownika();	
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
	uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
	uzytkownikMenadzer.logowanieUzytkownika();
	adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
	uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
	uzytkownikMenadzer.wylogujUzytkownika();
	delete adresatMenadzer;
	adresatMenadzer = NULL;
}
void KsiazkaAdresowa::dodawanieNowegoAdresata()
{
	adresatMenadzer->dodawanieNowegoAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
	adresatMenadzer->wyswietlWszystkichAdresatow();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
	
	{
		if (uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika() > 0)
			return true;
		else
			return false;
	}
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
	adresatMenadzer->wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
	adresatMenadzer->wyszukajAdresatowPoNazwisku();
}