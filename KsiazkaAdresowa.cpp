
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
int KsiazkaAdresowa::logowanieUzytkownika()
{
	uzytkownikMenadzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenadzer.logowanieUzytkownika());
	return uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
	uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}
