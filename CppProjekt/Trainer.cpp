#include "Trainer.h"

CTrainer::CTrainer(string name, string vorname, unsigned int alter)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->lizenzStufe = 0;
}

void CTrainer::print() const
{
	CPerson::print();
	cout << "Lizenzstufe: " << this->lizenzStufe << endl;

}

void CTrainer::setLizenzstufe(unsigned int lizenstufe)
{
	this->lizenzStufe = lizenstufe;
}


