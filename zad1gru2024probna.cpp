#include<iostream>
#include<bitset>

using namespace std;

void zad1()
{
	int n = 75;
	int poz = 0;
	string dwojk = "";
	//int liczba = 1;
	while (n > 0)
	{
		poz++;
		if (n % 2 == 1)
		{
			cout << poz << " ";
			dwojk = dwojk + "1";
		}
		
		n = n / 2;
		/*liczba = n % 2;
		liczba = liczba * 10;*/
		
	}
	//cout << dwojk;
}
int licznik = 0;
int zad2(int x, int p)
{
	licznik++;
	int c;
	if (x == 0)
	{
		return 0;
	}
	else
	{
		c = x % p;
		if (c % 2 == 1)
		{
			return zad2(x / p, p) + c;
		}
		else
		{
			return zad2(x / p, p) - c;
		}
	}

	//return licznik;
}


int main()
{
	//zad1();
	int x = 130, p = 3;
	cout << zad2(x,p) << " ";
	cout << licznik;
	//int a = 19;

	
}