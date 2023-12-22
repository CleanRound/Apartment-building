#include"House.h"

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int countid = 1;

	int countpeople = 3;

	int counhouse = 1;

	int countflat = 3;

	People* p = new People[countpeople]
	{
		{countid++, "Hannah Grace Thompson"},
		{countid++, "Xavier James Mitchell"},
		{countid++, "Ava Marie Reynolds"}
	};



	cout << endl;
	cout << "-------------------";
	cout << endl;

	Flat f;

	f.initFlat(countflat, p);


	House h;
	h.init(20, countflat, &f);

	h.ShowHouse(countflat, countpeople, p);

	cout << endl;

	system("pause");
}