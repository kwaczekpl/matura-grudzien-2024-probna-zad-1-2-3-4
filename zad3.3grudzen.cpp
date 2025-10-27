#include<iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
	ifstream plik("liczby.txt");

	string liczba = "";
	string liczbaW = "";
	string liczbaM = "";
	int iRoznicaW = 0;
	int iRoznicaM = 0;
	int iRoznicaRowna = 0;

	while (plik >> liczba)
	{
		liczbaW = liczba;
		liczbaM = liczba;
		sort(liczbaM.begin(), liczbaM.end());
		sort(liczbaW.begin(), liczbaW.end(), greater());
		

		int roznica = stoi(liczbaW) - stoi(liczbaM);

		if (roznica == stoi(liczba))
		{
			iRoznicaRowna++;
			cout << "Roznica Rowna Liczba: " << liczba;
		}
		if (roznica > stoi(liczba))
		{
			iRoznicaW++;
		}
		if (roznica < stoi(liczba))
		{
			iRoznicaM++;
		}
	}
	
	cout << '\n';

		
	cout << "Roznica mniejsza ilosc: " << iRoznicaM << '\n';
	cout << "Roznica wieksza ilosc: " << iRoznicaW << '\n';
	cout << "Roznica rowna ilosc: " << iRoznicaRowna << '\n';
	
	
	
}