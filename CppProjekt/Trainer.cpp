#include "Trainer.h"



CTrainer::CTrainer()
{
	lizenzStufe = 0;
}


CTrainer::~CTrainer()
{
}


void CTrainer::print()
{
}


CTrainer::CTrainer(string name, string vorname, unsigned int alter)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
}
