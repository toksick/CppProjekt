#pragma once
#include "Person.h"
class CTrainer : public CPerson
{
public:
	CTrainer(string name, string vorname, unsigned int alter);
	virtual ~CTrainer();
	virtual void print();
private:
	unsigned int lizenzStufe;
};

