#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
	UzytkownikMenadzer uzytkownikMenadzer;
	AdresatMenadzer *adresatMenadzer;
	const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
	KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
		: uzytkownikMenadzer(nazwaPlikuZUzytkownikami),NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
	{
		adresatMenadzer = NULL;
	}
	~KsiazkaAdresowa()
	{
		delete adresatMenadzer;
		adresatMenadzer = NULL;
	};
	void rejestracjaUzytkownika();
	void wypiszWszystkichUzytkownikow();
	void logowanieUzytkownika();
	void zmianaHaslaZalogowanegoUzytkownika();
	void wylogujUzytkownika();
	bool czyUzytkownikJestZalogowany();

	void dodawanieNowegoAdresata();
	void wyswietlWszystkichAdresatow();
	void wyszukajAdresatowPoImieniu();
	void wyszukajAdresatowPoNazwisku();
	void edytujAdresata();
	void usunAdresata();
	char wybierzOpcjeZMenuGlownego();
	char wybierzOpcjeZMenuUzytkownika();
};
#endif