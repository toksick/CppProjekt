#pragma once
#include "Person.h"
class CFuehrung : public CPerson
{
	enum e_aufgabe {
		praesident = 0,
		vorstand = 1,
		sportdirektor = 2
	};
public:
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);
	virtual ~CFuehrung();
	void print();
private:
	e_aufgabe aufgabe;
};

