#pragma once
#include "Spieler.h"
class CTorwart :
	public CSpieler
{
public:
	CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	~CTorwart();
	void print();
private:
	unsigned int strafRaumBerherrschung;
	unsigned int linienQualitaet;
	unsigned int abwehrKommunikation;
};

