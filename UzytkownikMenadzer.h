#ifndef UZYTKOWNIKMENADZER_H
#define UZYTKOWNIKMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikiZUzytkownikami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class UzytkownikMenadzer
{
	vector <Uzytkownik> uzytkownicy;
	int idZalogowanegoUzytkownika;
	PlikiZUzytkownikami plikZUzytkownikami;
	
	Uzytkownik podajDaneNowegoUzytkownika();
	int pobierzIdNowegoUzytkownika();
	bool czyIstniejeLogin(string login);
	void zapiszWszystkichUzytkownikowDoPliku();
		
public:
	UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
		idZalogowanegoUzytkownika = 0;
		uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
	};
	void rejestracjaUzytkownika();
	void wypiszWszystkichUzytkownikow();
	int logowanieUzytkownika();
	void zmianaHaslaZalogowanegoUzytkownika();
	void wylogujUzytkownika();
	bool czyUzytkownikJestZalogowany();

	void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
	int pobierzIdZalogowanegoUzytkownika();
};
#endif