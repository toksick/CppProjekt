
#include "Person.h"
class CSpieler : public CPerson
{
public:
	enum e_position { torwart, abwehr, mittelfeld, sturm };
	CSpieler();
	virtual ~CSpieler();
	virtual void print();
protected:
	unsigned int nummer;
	e_position position;
};
