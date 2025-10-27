#include<iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

long long h, s, pole;
ifstream plik("prostokaty_przyklad.txt");

int main()
{


	vector<int> wysokosc;
	vector<int> szerokosc;
	vector<long long> szerokosciPO;
	vector<long long> liczenie;
	vector<long long> usuniete;

	while (plik >> h >> s)
	{
		wysokosc.push_back(h);
		szerokosc.push_back(s);
	}

	long long sumaSzer = 0;
	long long licz = 0;
	int count = 0;

	for (int i = 0; i < wysokosc.size(); i++)
	{
		for (int j = 0; j < wysokosc.size(); j++)
		{
			if(wysokosc.at(i) == wysokosc.at(j))
			{
				licz++;
				sumaSzer = sumaSzer + szerokosc.at(j);

				if (licz == 4)
				{
					usuniete.push_back(szerokosc.at(j));
				}
				if (licz == 5)
				{
					break;
				}
				
				
			}
			
			
		}
		//cout << sumaSzer << '\n';
		if (licz == 1)
		{
			
		}
		else
		{
			
			if (licz == 4)
			{
				licz = licz - 1;
				sumaSzer = sumaSzer - usuniete[count];
				count++;
			}

			liczenie.push_back(licz);
			//cout << licz << " ";

			szerokosciPO.push_back(sumaSzer);
		}
		licz = 0;
		sumaSzer = 0;
	}

	//for (auto liczba : liczenie)
	//{
	//	cout << liczba << ' ';
	//	
	//}

	//cout << '\n'; 

	//for (auto liczba : szerokosciPO)
	//{
	//	cout << liczba << '\n';
	//}


}