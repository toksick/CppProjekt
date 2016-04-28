#include "Fuehrung.h"



CFuehrung::CFuehrung()
{
}


CFuehrung::~CFuehrung()
{
}


void CFuehrung::print()
{
}


CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}
