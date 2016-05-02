#include "Torwart.h"

CTorwart::CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname;
	this->alter;
	this->position = position;
	this->nummer = nummer;
}

CTorwart::~CTorwart()
{
}

void CTorwart::print()
{
	CSpieler::print();
	cout << "Kommunikation mit der Abwehr: " << this->abwehrKommunikation;
	cout << "Qualitaet auf der Linie: " << this->linienQualitaet << endl;
	cout << "Beherrschung des Strafraums: " << this->strafRaumBerherrschung << endl;
}
