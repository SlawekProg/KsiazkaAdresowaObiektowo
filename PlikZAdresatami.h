
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
	const string NAZWA_PLIKU_Z_ADRESATAMI;
	int idZalogowanegoUzytkownika;
	int idOstatniegoAdresata;

	string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
	int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);	
	int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	
public:

	PlikZAdresatami(string nazwaPlikuZAdreatami,int IDZALOGOWANEGOUZYTKOWNIKA)
		:NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdreatami),idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA) {};

	vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
	Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
	void dopiszAdresataDoPliku(Adresat adresat);
	
	void ustawIdIstatniegoAdresata(int noweIdOstatniegoAdresata);
	int pobierzIdIstatniegoAdresata();
};