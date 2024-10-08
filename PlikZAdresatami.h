
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
	const string nazwaPlikuZAdresatami;
	int idZalogowanegoUzytkownika;
	int idOstatniegoAdresata;

	string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
	int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);	
	int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	
public:

	PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) :nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
	vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
	Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
	void dopiszAdresataDoPliku(Adresat adresat);
	void wyswietlWszystkichAdresatow();
	
	
	void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
	int pobierzIdZalogowanegoUzytkownika();
	void ustawIdIstatniegoAdresata(int noweIdZalogowanegoUzytkownika);
	int pobierzIdIstatniegoAdresata();
};