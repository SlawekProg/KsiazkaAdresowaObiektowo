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
	vector <Adresat> adresaci;
	PlikZAdresatami plikZAdresatami;
	int idZalogowanegoUzytkownika;

	Adresat podajDaneNowegoAdresata();
	void wyswietlDaneAdresata(Adresat adresat);
public:
	AdresatMenadzer(string nazwaPlikuZAdresatami)
		: plikZAdresatami(nazwaPlikuZAdresatami)
	{}
	void dodawanieNowegoAdresata();
	void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
	void wyswietlWszystkichAdresatow();

	void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
	int pobierzIdZalogowanegoUzytkownika();
	void wyczyscVectorAdresaci();
};

#endif