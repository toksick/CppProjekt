
#include "Person.h"
class CSpieler : public CPerson
{
	enum e_position {
		torwart = 1,
		abwehr = 2,
		mittelfeld = 3,
		sturm = 4
	};
public:
	CSpieler();
	virtual ~CSpieler();
	virtual void print();
protected:
	unsigned int nummer;
	e_position position;
};
