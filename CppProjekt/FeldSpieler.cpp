#include "FeldSpieler.h"

CFeldSpieler::CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
}

CFeldSpieler::~CFeldSpieler()
{
}


void CFeldSpieler::print()
{
	CSpieler::print();
	cout << "Ballbeherrschung: " << this->ballBeherrschung << endl;
	cout << "Schussgenauigkeit: " << this->schussGenauigkeit << endl;
	cout << "Schusskraft: " << this->schussKraft << endl;
	cout << "Verteidigung: " << this->verteidigung << endl;
}




