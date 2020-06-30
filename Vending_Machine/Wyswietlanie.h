#pragma once

//Funkcja nadaje wstepne produkty i ich parametry oraz wyswietla pseudograficzny podglad automatu

#include<iostream>
#include<iomanip>			//Biblioteka do ustawiania precyzji wyœwietlania
#include"Automat.h"


using namespace std;


Automat Pole1("Snickers", 3.50, 1, 1);
Automat Pole2("Lion", 4.50, 3, 2);
Automat Pole3("Twix", 2.55, 5, 3);

Automat Pole4("Cola", 2.00, 9, 4);
Automat Pole5("Pepsi", 2.20, 8, 5);
Automat Pole6("Sprite", 1.90, 3, 6);

Automat Pole7("Lays", 5.20, 9, 7);
Automat Pole8("Tiger", 2.35, 8, 8);
Automat Pole9("Black", 1.90, 3, 9);

Automat Pole10("Tymbark", 3.60, 9, 10);
Automat Pole11("Skittles", 3.80, 8, 11);
Automat Pole12("Oshee", 2.30, 3, 12);


void Wyswietl_Automat() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

	cout << "**********************************************" << endl;
	cout << "**********************************************" << endl;
	cout << "**********  AUTOMAT - ZAPRASZAMY!  ***********" << endl;
	cout << "**********************************************" << endl;
	cout << "**********************************************" << endl;

	cout << "****" << " " << Pole1.get_nazwa() << " " << "****" << "   " << Pole2.get_nazwa() << "   " << "****" << "  " << Pole3.get_nazwa() << "    " << "****" << endl;
	cout << "****" << " L: " << Pole1.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole2.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole3.get_liczba_dostepnych() << "     " << "****" << endl;
	cout << "****" << " C: " << fixed << setprecision(2) << Pole1.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole2.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole3.get_cena() << "  " << "****" << endl;
	cout << "****" << " N: " << Pole1.get_numerek() << "     " << "****" << " N: " << Pole2.get_numerek() << "     " << "****" << " N: " << Pole3.get_numerek() << "     " << "****" << endl;

	cout << "**********************************************" << endl;

	cout << "****" << "  " << Pole4.get_nazwa() << "    " << "****" << "  " << Pole5.get_nazwa() << "   " << "****" << "  " << Pole6.get_nazwa() << "  " << "****" << endl;
	cout << "****" << " L: " << Pole4.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole5.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole6.get_liczba_dostepnych() << "     " << "****" << endl;
	cout << "****" << " C: " << fixed << setprecision(2) << Pole4.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole5.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole6.get_cena() << "  " << "****" << endl;
	cout << "****" << " N: " << Pole4.get_numerek() << "     " << "****" << " N: " << Pole5.get_numerek() << "     " << "****" << " N: " << Pole6.get_numerek() << "     " << "****" << endl;


	cout << "**********************************************" << endl;

	cout << "****" << "  " << Pole7.get_nazwa() << "    " << "****" << "  " << Pole8.get_nazwa() << "   " << "****" << "  " << Pole9.get_nazwa() << "   " << "****" << endl;
	cout << "****" << " L: " << Pole7.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole8.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole9.get_liczba_dostepnych() << "     " << "****" << endl;
	cout << "****" << " C: " << fixed << setprecision(2) << Pole7.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole8.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole9.get_cena() << "  " << "****" << endl;
	cout << "****" << " N: " << Pole7.get_numerek() << "     " << "****" << " N: " << Pole8.get_numerek() << "     " << "****" << " N: " << Pole9.get_numerek() << "     " << "****" << endl;


	cout << "**********************************************" << endl;

	cout << "****" << "  " << Pole10.get_nazwa() << " " << "****" << " " << Pole11.get_nazwa() << " " << "****" << "  " << Pole12.get_nazwa() << "   " << "****" << endl;
	cout << "****" << " L: " << Pole10.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole11.get_liczba_dostepnych() << "     " << "****" << " L: " << Pole12.get_liczba_dostepnych() << "     " << "****" << endl;
	cout << "****" << " C: " << fixed << setprecision(2) << Pole10.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole11.get_cena() << "  " << "****" << " C: " << fixed << setprecision(2) << Pole12.get_cena() << "  " << "****" << endl;
	cout << "****" << " N: " << Pole10.get_numerek() << "    " << "****" << " N: " << Pole11.get_numerek() << "    " << "****" << " N: " << Pole12.get_numerek() << "    " << "****" << endl;


	cout << "**********************************************" << endl;
	cout << "**********************************************" << endl << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	cout << "< OZNACZENIA >" << endl;
	cout << "L - Liczba dostepnych produktow " << endl;
	cout << "C - Cena " << endl;
	cout << "N - Numer pod jakim znajduje sie produkt " << endl << endl;

}
