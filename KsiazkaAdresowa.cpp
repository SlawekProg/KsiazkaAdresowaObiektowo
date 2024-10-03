
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
	return uzytkownikMenadzer.logowanieUzytkownika();
}

