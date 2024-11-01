
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami:public PlikTekstowy
{
	const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "PlikTymczasowyAdresatow.txt";
	int idZalogowanegoUzytkownika;
	int idOstatniegoAdresata;

	
	int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);	
	int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	
public:

	PlikZAdresatami(string nazwaPlikuZAdreatami,int IDZALOGOWANEGOUZYTKOWNIKA)
		:PlikTekstowy(nazwaPlikuZAdreatami),idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA) {};

	vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
	Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
	void dopiszAdresataDoPliku(Adresat adresat);
	string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
	void pobierzZPlikuIdOstatniegoAdresata();
	void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
	void edytujDaneWybranegoAdresata(Adresat adresat);
	
	void ustawIdIstatniegoAdresata(int noweIdOstatniegoAdresata);
	int pobierzIdIstatniegoAdresata();
};