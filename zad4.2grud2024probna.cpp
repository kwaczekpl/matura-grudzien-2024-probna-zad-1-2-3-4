#include<iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

long long h, s, pole;
ifstream plik("prostokaty.txt");

int main()
{


	vector<int> wysokosc;
	vector<int> szerokoœæ;
	vector<int> pole;


	int ciag = 1;

	while (plik >> h >> s)
	{
		wysokosc.push_back(h);
		szerokoœæ.push_back(s);

	}

	int max = 0;
	int ost_h = 0;
	int ost_s = 0;

	for(int i = 0; i + 2 <= wysokosc.size(); ++i)
	{
		if ((wysokosc.at(i) >= wysokosc.at(i + 1)) && (szerokoœæ.at(i) >= szerokoœæ.at(i + 1)))
		{
			ciag++;
			
		}
		else
		{
			if (max < ciag)
			{
				max = ciag;
				ost_h = wysokosc.at(i);
				ost_s = szerokoœæ.at(i);
				
				//cout << max;
			}

			ciag = 1;
		}
	}

	std::cout << max <<  " ";
	std::cout << ost_h << " " << ost_s << '\n';

	//for (auto liczba : wysokosc)
	//{
	//	//cout << liczba << ' ';
	//	
	//}


	/*for (auto liczba : pole)
	{
		cout << liczba << '\n';
	}*/


}