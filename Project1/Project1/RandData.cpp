
#include "RandData.h"



RandData::RandData()
{
}

void RandData::zapis(int a)
{
	string linia;
	fstream plik;
	srand(time(NULL));



	plik.open("dane.txt", ios::out | ios::trunc);
	if (plik.good() == true)
	{
		int liczba;
		for (int i = 0; i < a; i++)
		{
			liczba = ((rand() % 99) + 0);
			std::string str = std::to_string(liczba);
			linia += str + " ";
		}
		plik << linia;
		plik.close();
	}
}


RandData::~RandData()
{
}
