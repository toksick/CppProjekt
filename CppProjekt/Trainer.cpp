#include "Trainer.h"

CTrainer::CTrainer(string name, string vorname, unsigned int alter)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	setLizenzstufe(0);
}

void CTrainer::print() const
{
	CPerson::print();
	cout << "Lizenzstufe: " << getLizenzStufe() << endl;

}

void CTrainer::setLizenzstufe(unsigned int lizenstufe)
{
	setLizenzstufe(lizenstufe);
}


