#pragma once
#include "Person.h"
class CFuehrung :
	public CPerson
{
public:
	CFuehrung();
	virtual ~CFuehrung();
private:
	e_aufgabe aufgabe;
public:
	void print();
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);
};

