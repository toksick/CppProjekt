#pragma once
#include "Person.h"
class CTrainer :
	public CPerson
{
public:
	CTrainer();
	virtual ~CTrainer();
	virtual void print();
private:
	unsigned int lizenzStufe;
public:
	CTrainer(string name, string vorname, unsigned int alter);
};

