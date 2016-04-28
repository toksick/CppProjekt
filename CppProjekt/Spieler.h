
#include "Person.h"
class CSpieler :
	public CPerson
{
public:
	CSpieler();
	virtual ~CSpieler();
protected:
	unsigned int nummer;
	e_position position;
public:
	virtual void print();
};
