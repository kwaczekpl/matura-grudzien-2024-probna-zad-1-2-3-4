#include<iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

long long h, s;
ifstream plik("prostokaty_przyklad.txt");

int main()
{
	map<int, long long> liczba;
	map<int, int> ilosc;

	map<int, int> poprawnaIlosc;
	
	map<int,long long> help;

	while (plik >> h >> s)
	{
		ilosc[h]++;

		if (ilosc[h] == 4)
		{
			help[h] = liczba[h];
		}

		if (ilosc[h] <= 5)
		{
			liczba[h] = liczba[h] + s;

		}
	}



	int k_values[]{ 2,3,5 };

	for (auto i : liczba)
	{
		if (ilosc[i.second] == 4)
		{
			liczba[i.second] = liczba[i.second] - help[i.second];
		}
	}
	ilosc.erase(1);
	liczba.erase(1);

	for (auto i : liczba)
	{
		cout << ilosc[i.first] << "," << i.second << '\n';
	}

		

	/*for (auto& p : liczba)
	{
		cout << p.first << "," << p.second << '\n';
	}*/
		
}