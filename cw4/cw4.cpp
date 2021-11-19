#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

	//zad1 + 2

	/*
	int tab[10], x = 3;

	for (int i = 0; i < 10; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}
	*/




	//zad3
	/*
	int tab[10], x=0,a;
	cout << "podaj a: ", cin >> a;
	cout << "\ntablica:\n";

	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a-x;
		cout << tab[i] << " ";
		x += 5;
	}
	cout << "\ntablica:\n";

	for (int i = 0; i<10; i++)
	{
		cout << tab[i] << " ";
	}
	*/

	//zad4
	/*
	srand(time(NULL));
	int min = -23, max = 50, min2=51;
	int a = rand()%(max - min) + min;
	int b = rand() % (max - min) + min;
	int c = rand() % (max - min) + min;

	cout << a << endl << b << endl << c << endl << endl;

	int tab[3] = { a,b,c };

	for (int i = 0; i < 3; i++)
	{
		if (tab[i] < min2)
		{
			min2 = tab[i];
		}


	}
	cout << "najmniejsza: " << min2;
	*/

	//zad5
	/*
	int a, b;
	cout << "Podaj wartosci poczatkowe: ";
	cin >> a >> b;
	int tab[8] = { a,b };
	for (int i = 2; i < 8; i++)
	{
		tab[i] = (tab[i - 2] + tab[i - 1]);
	}
	for (int i = 0; i < 8; i++)
	{
		cout << tab[i] << " ";
	}
	*/

	//zad6
	/*
	int tab[20] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 10; i < 20; i++)
	{
		tab[i] = tab[i - 10];
	}
	for (int i = 0; i < 20; i++)
	{
		cout << tab[i] << " ";
	}
	*/
	//zad7
	/*
	int suma = 0, tab[4][4]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
			{
				suma += tab[i][j];
			}
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	cout << "suma przekatnej: " << suma;
	*/

	//zad8
	int suma = 0, tab[3][3]{ 1,2,3,4,5,6,7,8,9 }, tab2[3][3]{ 3,5,4,1,6,7,0,9,2 };
	cout << "Tab1 + Tab2 =\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)

		{
			tab[i][j] += tab2[i][j];
			cout << tab[i][j] << " ";
		}
		cout << endl;
}



}

