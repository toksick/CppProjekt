#pragma once
#include "Spieler.h"
class CTorwart :
	public CSpieler
{
public:
	CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	void print() const;
private:
	unsigned int strafRaumBerherrschung;
	unsigned int linienQualitaet;
	unsigned int abwehrKommunikation;
};

