#pragma once
#include "Person.h"
class CSpieler : public CPerson
{
public:
	enum e_position { torwart, abwehr, mittelfeld, sturm };
	CSpieler();
	virtual void print() const;
protected:
	unsigned int nummer;
	e_position position;
};
