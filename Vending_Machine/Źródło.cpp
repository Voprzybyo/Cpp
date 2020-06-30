#include<iostream>
//#include<iomanip>			
#include"Automat.h"
#include"Wyswietlanie.h"
#include"Modyfikacja.h"

using namespace std;

void Kupowanie() {

	system("cls");
	cout << endl << endl;

	Wyswietl_Automat();

	cout << "Wybierz numer produktu:  ";

	int wybor2;
	cin >> wybor2;

	cout << endl;

	switch (wybor2) {
	case 1: Pole1.Wybor_Produktu(); break;
	case 2: Pole2.Wybor_Produktu(); break;
	case 3: Pole3.Wybor_Produktu(); break;
	case 4: Pole4.Wybor_Produktu(); break;
	case 5: Pole5.Wybor_Produktu(); break;
	case 6: Pole6.Wybor_Produktu(); break;
	case 7: Pole7.Wybor_Produktu(); break;
	case 8: Pole8.Wybor_Produktu(); break;
	case 9: Pole9.Wybor_Produktu(); break;
	case 10: Pole10.Wybor_Produktu(); break;
	case 11: Pole11.Wybor_Produktu(); break;
	case 12: Pole12.Wybor_Produktu(); break;
	default: cout << endl << "Nie ma takiego numeru w naszym automacie. " << endl << endl;

	}
}

int main() {

	for (;;) {


		cout << endl << "Witamy! " << endl << endl;

		cout << "1. Wyswietl automat." << endl;
		cout << "2. Kup produkt." << endl;
		cout << "3. Wyjdz z programu. "  << endl << endl;
		cout << "4. Modyfikowanie zawartosci. (opcja dla programisty - uzytkownik jej nie widzi)" << endl << endl;


		int wybor1;
		cout << "Twoj wybor: ";
		cin >> wybor1;
		cout << endl;

		switch (wybor1) {

		case 1: Wyswietl_Automat(); break;

		case 2: Kupowanie(); break;

		case 3: return 0;

		case 4:menu_techniczne(); break;

		default: 
			system("cls"); 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "Wprowadzono bledny numer. " << endl; 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			continue;
			
		}
		cout << endl; 
	}
}


