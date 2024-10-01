#ifndef PLIKIZUZYTKOWNIKAMI_H
#define PLIKIZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikiZUzytkownikami
{

	fstream plikTekstowy;
	string nazwaPlikuZUzytkownikami;
	bool czyPlikJestPusty();
	string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
public:
	void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
	PlikiZUzytkownikami();
	vector <Uzytkownik> wczytajUzytkownikowZPliku();
	Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

};
#endif