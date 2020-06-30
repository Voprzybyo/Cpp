#pragma once

#include<iostream>
#include"Automat.h"
#include"Wyswietlanie.h"

using namespace std;

void menu_techniczne() {

	system("cls");

	Wyswietl_Automat();

	cout << "Ktory numer pola w automacie chcesz modyfikowac?" << endl << endl;

	cout << " Twoj wybor: ";
	int wybor7;
	cin >> wybor7;

	system("cls");
	switch (wybor7) {
	case 1: cout << "Modyfikujesz produkt: " << Pole1.get_nazwa() << endl << endl;  Pole1.Modyfikuj();break;
	case 2: cout << "Modyfikujesz produkt: " << Pole2.get_nazwa() << endl << endl; Pole2.Modyfikuj(); break;
	case 3: cout << "Modyfikujesz produkt: " << Pole3.get_nazwa() << endl << endl; Pole3.Modyfikuj(); break;
	case 4: cout << "Modyfikujesz produkt: " << Pole4.get_nazwa() << endl << endl; Pole4.Modyfikuj(); break;
	case 5: cout << "Modyfikujesz produkt: " << Pole5.get_nazwa() << endl << endl; Pole5.Modyfikuj(); break;
	case 6: cout << "Modyfikujesz produkt: " << Pole6.get_nazwa() << endl << endl; Pole6.Modyfikuj(); break;
	case 7: cout << "Modyfikujesz produkt: " << Pole7.get_nazwa() << endl << endl; Pole7.Modyfikuj(); break;
	case 8: cout << "Modyfikujesz produkt: " << Pole8.get_nazwa() << endl << endl; Pole8.Modyfikuj(); break;
	case 9: cout << "Modyfikujesz produkt: " << Pole9.get_nazwa() << endl << endl; Pole9.Modyfikuj(); break;
	case 10: cout << "Modyfikujesz produkt: " << Pole10.get_nazwa() << endl << endl; Pole10.Modyfikuj(); break;
	case 11: cout << "Modyfikujesz produkt: " << Pole11.get_nazwa() << endl << endl; Pole11.Modyfikuj(); break;
	case 12: cout << "Modyfikujesz produkt: " << Pole12.get_nazwa() << endl << endl; Pole12.Modyfikuj(); break;
	default: cout << "Wybierz jedna z podanych wyzej opcji. " << endl << endl;
	}

}
