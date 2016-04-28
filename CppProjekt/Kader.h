#include <string>
#include "Person.h"
using namespace std;

class CKader
{
private:
	unsigned int anzKader;
	static const int maxAnzFuehrung = 22;
	CPerson * pKaderMitglieder[maxAnzFuehrung];
public:
	CKader();
	virtual bool add(const CPerson &arg);
	virtual void print();
};