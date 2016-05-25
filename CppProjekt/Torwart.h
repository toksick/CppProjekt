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
public:
	unsigned int getStrafRaumBerherrschung() { return strafRaumBerherrschung; }
	unsigned int getLinienQualitaet() { return linienQualitaet; }
	unsigned int getAbwehrKommunikation() { return abwehrKommunikation; }
	void setStrafRaumBerherrschung(unsigned int areacontrol) { this->strafRaumBerherrschung = areacontrol; }
	void setLinienQualitaet(unsigned int linequality) { this->linienQualitaet = linequality; }
	void setAbwehrKommunikation(unsigned int defencecommunication) { this->abwehrKommunikation = defencecommunication; }
};

