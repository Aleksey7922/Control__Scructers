#include<iostream>
using namespace std;


//#define TEMP



void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef TEMP
	cout << "Hello controls !" << endl;
	int t;
	cout << "������� ����������� �������:"; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� ������� " << endl;
	}
#endif // TEMP



}
