#pragma once
#include "Person.h"
class CTrainer : public CPerson
{
public:
	CTrainer(string name, string vorname, unsigned int alter);
	virtual ~CTrainer();
	virtual void print();
	virtual void setLizenzstufe(unsigned int lizenzstufe);
private:
	unsigned int lizenzStufe;
};

