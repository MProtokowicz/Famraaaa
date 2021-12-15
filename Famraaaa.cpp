#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

class warzywa
{
public:
	string nazwa;
	string klasa;
	int waga;


	void dodawanie_warzyw()
	{
		cout << "Dodawanie warzyw do warzywnika" << endl;

		cout << "Podaj nazwe: " << endl;
		cin >> nazwa;

		cout << "Podaj klase: " << endl;
		cin >> klasa;

		cout << "Podaj wage: " << endl;
		cin >> waga;
	}

	void warzywnik()
	{
		cout << " nazwa: " << nazwa << " klasa: " << klasa << " waga: " << waga << endl;
	}
};

int main()
{
	warzywa warzywo1;
	warzywo1.dodawanie_warzyw();


	warzywa warzywo2;
	warzywo2.dodawanie_warzyw();

	warzywa warzywo3;
	warzywo3.dodawanie_warzyw();

	warzywa warzywo4;
	warzywo4.dodawanie_warzyw();

	warzywo1.warzywnik();
	warzywo2.warzywnik();
	warzywo3.warzywnik();
	warzywo4.warzywnik();


}