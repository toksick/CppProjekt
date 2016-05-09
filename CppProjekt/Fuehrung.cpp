#include "Fuehrung.h"

CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}

void CFuehrung::print() const
{
	CPerson::print();
	switch (this->aufgabe)
	{
	case praesident:
		cout << "Aufgabe: Präsident" << endl;
		break;
	case vorstand:
		cout << "Aufgabe: Vorstand" << endl;
		break;
	case sportdirektor:
		cout << "Aufgabe: Sportdirektor" << endl;
		break;
	default:
		break;
	}
}



