#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze
{
public:
	static string konwersjaIntNaString(int liczba);
	static string wczytajLinie();
	static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
	static bool czyPlikJestPusty();
	static int konwersjaStringNaInt(string liczba);
	static string pobierzLiczbe(string tekst, int pozycjaZnaku);
	static int wczytajLiczbeCalkowita();
	static char wczytajZnak();
	static void usunPlik(string nazwaPlikuZRozszerzeniem);
	static void zmienNazwePliku(string staraNazwa, string nowaNazwa);
};
#endif