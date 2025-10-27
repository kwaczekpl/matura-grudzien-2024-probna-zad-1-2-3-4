#include<iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

bool dzielnik(int liczba)
{
	int count = 0;
	if (liczba % 2 == 0)
	{
		count++;
		while (liczba % 2 == 0)
		{
			liczba = liczba / 2;
		}
	}

	for (int i = 3; i * i < liczba; i = i + 2)
	{
		if (liczba % i == 0)
		{
			count++;
			while (liczba % i == 0)
			{
				liczba = liczba / i;
			}
		}
	}

	if (liczba > 0)
	{
		count++;
	}
	if (count >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	ifstream plik("liczby.txt");

	int liczba = 0;

	while (plik >> liczba)
	{
		if (dzielnik(liczba))
		{
			cout << liczba << '\n';
		}
		
		
	}
	//cout << "ilosc liczb: " << ile;
}