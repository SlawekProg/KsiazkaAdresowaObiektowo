
#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
	KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
	int wybor = 0;
	while (true)
	{
		if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
		{
			system("cls");
			cout << "---------- KSIAZKA ADRESOWA ----------" << endl << endl;
			cout << "1. Rejestracja" << endl;
			cout << "2. Logowanie" << endl;
			cout << "9. Zakoncz Program" << endl;
			wybor = MetodyPomocnicze::wczytajLiczbeCalkowita();

			if (wybor == 1) ksiazkaAdresowa.rejestracjaUzytkownika();
			else if (wybor == 2) ksiazkaAdresowa.logowanieUzytkownika();
			else if (wybor == 9) exit(0);
		}
		else
		{
			while (true)
			{
				system("cls");
				cout << "------------ KSIAZKA ADRESOWA ------------" << endl << endl;
				cout << "1. Dodanie osoby do ksiazki adresowej" << endl;
				cout << "2. Wyszukiwanie osob po imieniu" << endl;
				cout << "3. Wyszukiwanie osob po nazwisku" << endl;
				cout << "4. Wyswietlenie calej ksiazki adresowej" << endl;
				cout << "5. Edytowanie wybranej osoby po numerze ID" << endl;
				cout << "6. Usuniecie wybranej osoby po numerze ID" << endl;
				cout << endl << "--------------------------------" << endl;
				cout << "7. Zmiana hasla" << endl;
				cout << "8. Wylogowanie" << endl;
				cout << "9. Zakonczenie programu" << endl;
				wybor = MetodyPomocnicze::wczytajLiczbeCalkowita();

				if (wybor == 1) ksiazkaAdresowa.dodawanieNowegoAdresata();
				else if (wybor == 2) ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
				else if (wybor == 3) ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
				else if (wybor == 4) ksiazkaAdresowa.wyswietlWszystkichAdresatow();
				else if (wybor == 5);	 //edycjaUtworzonegoWpisuPoId(osoby);
				else if (wybor == 6);	 //usuwanieWpisu(osoby);
				else if (wybor == 7) ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
				else if (wybor == 8) ksiazkaAdresowa.wylogujUzytkownika();
				else if (wybor == 9) exit(0);
			}
		}
	}
	

	
	
	

	return 0;
}