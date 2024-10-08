
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
	adresatMenadzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
	adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
	uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
	uzytkownikMenadzer.wylogujUzytkownika();
	adresatMenadzer.wyczyscVectorAdresaci();
}
void KsiazkaAdresowa::dodawanieNowegoAdresata()
{
	adresatMenadzer.dodawanieNowegoAdresata();
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
	return uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
	adresatMenadzer.wyswietlWszystkichAdresatow();
}
