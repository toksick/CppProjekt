#pragma once
#include "Person.h"
class CFuehrung : public CPerson
{
public:
	enum e_aufgabe { praesident, vorstand, sportdirektor };
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);
	void print() const;
private:
	e_aufgabe aufgabe;
};

