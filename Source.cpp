#include<iostream>
using namespace std;


//#define TEMP



void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef TEMP
	cout << "Hello controls !" << endl;
	int t;
	cout << "Введите температуру воздуха:"; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно " << endl;
	}
#endif // TEMP



}
