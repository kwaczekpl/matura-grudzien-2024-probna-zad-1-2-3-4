#include<iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	ifstream plik("liczby.txt");

	int liczba = 0;
	int liczba2 = 0;
	int ile = 0;
	while (plik >> liczba)
	{
		liczba2 = sqrt(liczba);

		//cout << liczba << '\n';
		if (liczba2 * liczba2 == liczba)
		{
			if (ile == 0)
			{
				cout << "pierwsza liczba: " << liczba << '\n';
			}
			
			ile++;
		}
	}
	cout <<"ilosc liczb: " << ile;
}