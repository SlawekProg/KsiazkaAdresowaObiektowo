#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenadzer
{
	const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
	vector <Adresat> adresaci;
	PlikZAdresatami plikZAdresatami;

	Adresat podajDaneNowegoAdresata();
	void wyswietlDaneAdresata(Adresat adresat);
	void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
public:
	AdresatMenadzer(string nazwaPlikuZAdresatami = "", int idZalogowanegoUzytkownika = 0)
		: ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami, ID_ZALOGOWANEGO_UZYTKOWNIKA)
	{
		adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
	}
	void dodawanieNowegoAdresata();
	void wyswietlWszystkichAdresatow();
	void wyszukajAdresatowPoImieniu();
};

#endif