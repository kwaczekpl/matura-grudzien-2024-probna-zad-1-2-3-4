#include<iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

long long h, s, pole;
ifstream plik("prostokaty_przyklad.txt");

int main()
{
	

	vector<int> wysokosc;
	vector<int> szeroko��;
	vector<int> pole;

	int i = 0;

	while (plik >> h >> s)
	{
		wysokosc.push_back(h);
		szeroko��.push_back(s);

		pole.push_back(szeroko��.at(i) * wysokosc.at(i));
		i++;
	}

	//for (auto liczba : wysokosc)
	//{
	//	//cout << liczba << ' ';
	//	
	//}

	sort(pole.begin(), pole.end());

	cout << pole.front() << '\n';
	cout << pole.back();

	/*for (auto liczba : pole)
	{
		cout << liczba << '\n';
	}*/


}