#include <string>
#include "Fuehrung.h"
#include "Kader.h"
using namespace std;

class CVerein
{
private:
	CKader * pMyKader;
	unsigned int anzFuehrung;
	static const int maxAnzFuehrung = 10;
	CFuehrung * fuehrungMitglieder[maxAnzFuehrung];
public:
	virtual bool add(const CFuehrung &arg);
	virtual bool add(const CKader &arg);
	virtual void print();
};