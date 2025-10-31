#include<iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int h;
long long s;
ifstream plik("prostokaty_przyklad.txt");

int main()
{
	/*map<int, long long> liczba;
	map<int, int> ilosc;*/

	vector<pair<long long, long long>> multiL;

	while (plik >> h >> s)
	{
		//ilosc[h]++;

		multiL.push_back({ h, s });  //multiL.push_back({ (int)h, (int)s });


		//liczba[h] = liczba[h] + s;
	}

	//sort(multiL.begin(), multiL.end(), greater());

	/*auto slurp = [](int right, int left)
		{
			return right < left;
		};*/

	int count = 1;

	long long max = 2;

	/*sort(multiL.begin(), multiL.end(), [](auto& a, auto& b)
		{
			return a.second > b.second;
		});*/

	sort(multiL.rbegin(), multiL.rend());


	long long max2 = 0;
	long long max3 = 0;
	long long max5 = 0;

	for (int i = 0; i < multiL.size(); i++)
	{
		max = multiL[i].second;

		for (int j = i + 1; j < multiL.size(); j++)
		{
			if (multiL[i].first != multiL[j].first)
			{
				break;
			}

			if (multiL[i].first == multiL[j].first)
			{
				max = max + multiL[j].second;
				count++;
				if (count == 2)
				{
					if (max2 < max)
					{
						max2 = max;
					}
					
					//cout << "2 prostokaty:" << max << '\n';
				}
				if (count == 3)
				{
					if (max3 < max)
					{
						max3 = max;
					}

					//cout << "3 prostokaty:" << max << '\n';
				}
				if (count == 5)
				{
					if (max5 < max)
					{
						max5 = max;
					}

					//cout << "5 prostokaty:" << max << '\n';
				}
				
				
				
				
			}
		}
		count = 1;
		
	}

	cout << "2 prostokaty: " << max2 << '\n';
	cout << "3 prostokaty: " << max3 << '\n';
	cout << "5 prostokaty: " << max5 << '\n';

	
	

	/*for (auto [key, val] : multiL)
	{	
		cout << key << " " << val << '\n';
	}*/




	/*for (auto [key, val] : multiL)
	{
		cout << key << " " << val << '\n';
	}*/

	/*for (auto& p : liczba)
	{
		cout << p.first << "," << p.second << '\n';
	}*/
		
}
}
