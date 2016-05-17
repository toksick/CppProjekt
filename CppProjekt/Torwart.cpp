#include "Torwart.h"

CTorwart::CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
	setAbwehrKommunikation(0);
	setLinienQualitaet(0);
	setStrafRaumBerherrschung(0);
}

void CTorwart::print() const
{
	CSpieler::print();
	cout << "Kommunikation mit der Abwehr: " << getAbwehrKommunikation() << endl;
	cout << "Qualitaet auf der Linie: " << getLinienQualitaet() << endl;
	cout << "Beherrschung des Strafraums: " << getStrafRaumBerherrschung() << endl;
}
