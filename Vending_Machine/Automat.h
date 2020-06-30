#pragma once
#include<iostream>
#include<windows.h>

using namespace std;

class Automat
{
private:

	string nazwa_m;
	double cena_m;
	int liczba_dostepnych_m;
	int numerek_m;

public:

	//Konstruktor
	Automat(string nazwa = "", double cena = 0, int liczba_dostepnych = 0, int numerek = 99) :
		nazwa_m{ nazwa }, cena_m{ cena }, liczba_dostepnych_m{ liczba_dostepnych }, numerek_m{ numerek }
	{}

	//Gettery
	string get_nazwa(void) const { return nazwa_m; }
	double get_cena(void) const { return cena_m; }
	int get_liczba_dostepnych(void) const { return liczba_dostepnych_m; }
	int get_numerek(void) const { return numerek_m; }

	//Settery
	void set_nazwa(const string& nazwa) { nazwa_m = nazwa; }
	void set_cena(const double& cena) { cena_m = cena; }
	void set_liczba_dostepnych(const int& liczba_dostepnych) { liczba_dostepnych_m = liczba_dostepnych; }
	void set_numerek(const int& numerek) { numerek_m = numerek; }

	//Wybor produktu
	void Wybor_Produktu() {
		system("cls");
		if (liczba_dostepnych_m == 0) {
			cout << " Brak wybranego towaru, przepraszamy. " << endl;
			Sleep(2000);

		}
		else {

			cout << " Chcesz kupic " << nazwa_m << " ? " << endl;
			cout << " CENA: " << cena_m << endl << endl;

			cout << "1. TAK " << endl;
			cout << "2. NIE " << endl << endl;

			cout << "Twoj wybor: ";
			int wybor3;
			cin >> wybor3;

			system("cls");

			switch (wybor3) {
			case 1:
				cout << "Platnosc karta/gotowka? " << endl;
				cout << "1. Gotowka. " << endl;
				cout << "2. Karta. " << endl << endl;
				cout << "3. Powrot do menu glownego. " << endl << endl;

				cout << "Twoj wybor: ";
				int wybor5;
				cin >> wybor5;

				system("cls");

				switch (wybor5) {

				case 1: Wplata_gotowki(); break;
				case 2: Platnosc_karta(); break;
				case 3: break;
				default: cout << " Wybierz karte lub gotowke." << endl << endl;
				}

			case 2: break;

			default: cout << "Potwierdz zakup produktu lub wroc do menu glownego. " << endl;

			}
		}
	}

	//Wydaj wybrany przedmiot
	void Wydaj_produkt() {
		cout << "Trwa wydawanie: " << nazwa_m << endl << endl;
		Sleep(1000);
		set_liczba_dostepnych(liczba_dostepnych_m - 1);			//Zmniejszenie o 1 liczby dostepnych produktow
		cout << "DZIEKUJEMY! " << endl << endl;
		Sleep(3000);
		system("cls");
		cout << endl << endl;
	}

	//Wydawanie reszty
	void Wydaj_reszte(double reszta) {
		cout << "Wydawanie " << reszta << " reszty... " << endl << endl;
		Sleep(1000);
		system("cls");
		cout << "Reszta wydana." << endl << endl;
		Sleep(2000);
		system("cls");
	}

	//P³atnoœæ gotówk¹
	void Wplata_gotowki() {

		double suma{ 0 };
		double reszta{ 0 };

		for (;;) {


			cout << "Wrzuc: " << endl << endl;
			cout << " 1. 10 gr " << endl;
			cout << " 2. 20 gr " << endl;
			cout << " 3. 50 gr " << endl;
			cout << " 4. 1 PLN " << endl;
			cout << " 5. 2 PLN " << endl;
			cout << " 6. 5 PLN " << endl;
			cout << endl << "Wcisnij 0 aby przerwac operacje i otrzymac zwrot" << endl << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "POZOSTALO DO ZAPLATY: " << cena_m - suma << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			cout << "Twoj wybor: ";
			int wybor4{ 99 };
			cin >> wybor4;
			system("cls");
			switch (wybor4) {
			case 1: suma += 0.1;   break;
			case 2: suma += 0.2;   break;
			case 3: suma += 0.5;   break;
			case 4: suma += 1.0;   break;
			case 5: suma += 2.0;   break;
			case 6: suma += 5.0;   break;
			case 0:
				if (suma > 0) {
					cout << endl << "Anulowanie transakcji i zwrot wrzuconej kwoty." << endl << endl;
					Wydaj_reszte(suma);
					break;
				}
				else { cout << "Powrot do menu glownego" << endl << endl; break; }
			default: cout << "Moneta nie spelnia wymogow (inna waluta lub uszkodzona)." << endl;
			}

			reszta = (suma - cena_m);
			if (wybor4 == 0) {

				break;
			}
			else if (reszta > 0) {
				Wydaj_reszte(reszta);
				Wydaj_produkt();
				break;
			}
		}
	}

	//P³atnoœæ kart¹
	void Platnosc_karta() {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "DO ZAPLATY: " << cena_m << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "ZBLIZ KARTE. " << endl << endl;

		cout << "1. Zbliz karte. " << endl;
		cout << "2. Powrot. " << endl << endl;

		cout << "Twoj wybor: ";
		int wybor6;
		cin >> wybor6;

		system("cls");

		Sleep(2000);

		switch (wybor6) {
		
		case 1:  cout << endl << "Oczekiwanie na akceptacje..." << endl << endl; 
			Sleep(2000);
				 Wydaj_produkt(); break;
		case 2: break;
		default: cout << "Zbliz karte aby zaplacic lub wroc do menu glownego. " << endl << endl;
		}
	}

	//Czesc programistyczna

	void Modyfikuj() {

		cout << "1. Dodaj / Usun produkt." << endl;
		cout << "2. Zmien cene produktu. " << endl;
		cout << "3. Zmien dostepna liczbe sztuk." << endl;
		cout << "4. Wyjdz." << endl << endl;

		cout << "Twoj wybor: ";

		int wybor8;
		cin >> wybor8;

		system("cls");

		switch (wybor8) {
		case 1: 
			cout << "Dodawanie/Usuwanie produktu" << endl<<endl;
			Dodaj_Usun_produkt(); break;
		case 2: cout << "Podaj nowa cene: ";
			double nowa_cena;
			cin >> nowa_cena;
			set_cena(nowa_cena);
			break;
		case 3: cout << "Podaj liczbe dostepnych sztuk: ";
			int nowa_liczba;
			cin >> nowa_liczba;
			set_liczba_dostepnych(nowa_liczba);
			break;
		case 4: break;
		default: cout << "Wybierz jedna z powyzszych opcji! " << endl << endl;

		}

	}

	void Dodaj_Usun_produkt() {

		cout << " Chcesz dodac czy usunac produkt? " << endl << endl;

		cout << "1. Dodaj. " << endl;
		cout << "2. Usun. " << endl;
		cout << "3. Wyjdz." << endl << endl;

		cout << "Twoj wybor: ";

		int wybor9;
		cin >> wybor9;

		system("cls");

		string nowa_nazwa;

		switch (wybor9) {

		case 1: cout << "Podaj nazwe produktu ktory chcesz dodac. " << endl;
			cout << "Nowa nazwa: ";
			cin >> nowa_nazwa;
			set_nazwa(nowa_nazwa);
			cout << endl << endl;

			cout << "Podaj cene: ";
			double nowa_cena;
			cin >> nowa_cena;
			set_cena(nowa_cena);
			cout << endl << endl;

			cout << "Podaj liczbe dostepnych sztuk: ";
			int nowa_liczba;
			cin >> nowa_liczba;
			set_liczba_dostepnych(nowa_liczba);
			cout << endl << endl;
			break;
		case 2: set_nazwa(" ");
			set_cena(0.00);
			set_liczba_dostepnych(0); break;
		case 3: break;
		default: cout << "Wybierz jedna z powyzszych opcji";
		}

	}

	//Destruktor
	~Automat() { }
};
