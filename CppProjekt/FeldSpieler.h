#pragma once
#include "Spieler.h"
class CFeldSpieler :
	public CSpieler
{
public:
	enum e_starkerFuss {unKnown, links, rechts, gleich};
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	~CFeldSpieler();
	const void print();
private:
	e_starkerFuss starkerFuss;
	unsigned int verteidigung;
	unsigned int ballBeherrschung;
	unsigned int schussKraft;
	unsigned int schussGenauigkeit;
};

