#include "Fuehrung.h"

CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}

CFuehrung::~CFuehrung()
{
}


void CFuehrung::print()
{

}


