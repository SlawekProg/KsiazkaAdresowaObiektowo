#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
	UzytkownikMenadzer uzytkownikMenadzer;
public:
	void rejestracjaUzytkownika();
	void wypiszWszystkichUzytkownikow();
	KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) :uzytkownikMenadzer(nazwaPlikuZUzytkownikami)
	{ uzytkownikMenadzer.wczytajUzytkownikowZPliku(); };
	int logowanieUzytkownika();
	void zmianaHaslaZalogowanegoUzytkownika();
};
#endif