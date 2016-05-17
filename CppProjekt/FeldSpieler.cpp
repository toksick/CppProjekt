#include "FeldSpieler.h"

CFeldSpieler::CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
	setBallbeherrschung(0);
	setSchussgenauigkeit(0);
	setSchusskraft(0);
	setVerteidigung(0);
}

void CFeldSpieler::print() const
{
	CSpieler::print();
	cout << "Ballbeherrschung: " << getBallbeherrschung() << endl;
	cout << "Schussgenauigkeit: " << getSchussgenauigkeit() << endl;
	cout << "Schusskraft: " << getSchussKraft() << endl;
	cout << "Verteidigung: " << getVerteidigung() << endl;
}




