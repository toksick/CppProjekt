#include "Torwart.h"

CTorwart::CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
	this->abwehrKommunikation = 0;
	this->linienQualitaet = 0;
	this->strafRaumBerherrschung = 0;
}

void CTorwart::print() const
{
	CSpieler::print();
	cout << "Kommunikation mit der Abwehr: " << this->abwehrKommunikation << endl;
	cout << "Qualitaet auf der Linie: " << this->linienQualitaet << endl;
	cout << "Beherrschung des Strafraums: " << this->strafRaumBerherrschung << endl;
}
