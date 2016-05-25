#pragma once
#pragma once
#include "Spieler.h"
class CFeldSpieler :
	public CSpieler
{
public:
	enum e_starkerFuss {unKnown, links, rechts, gleich};
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	void print() const;
private:
	e_starkerFuss starkerFuss;
	unsigned int verteidigung;
	unsigned int ballBeherrschung;
	unsigned int schussKraft;
	unsigned int schussGenauigkeit;
public:
	unsigned int getVerteidigung() { return verteidigung; }
	unsigned int getBallbeherrschung() { return ballBeherrschung; }
	unsigned int getSchussKraft() { return schussKraft; }
	unsigned int getSchussgenauigkeit() { return schussGenauigkeit; }
	void setVerteidigung(unsigned int defence) { this->verteidigung = defence; }
	void setBallbeherrschung(unsigned int ballcontrol) { this->ballBeherrschung = ballcontrol; }
	void setSchusskraft(unsigned int shootpower) { this->schussKraft = shootpower; }
	void setSchussgenauigkeit(unsigned int shootefficiency) { this->schussGenauigkeit = shootefficiency; }
};

