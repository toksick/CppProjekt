#include "Verein.h"

bool CVerein::add(const CFuehrung &arg)
{
    CVerein::fuehrungMitglieder[getAnzFuehrung()] = &arg;
    setAnzFuehrung(getAnzFuehrung()+1);
    return true;
}
bool CVerein::add(const CKader &arg)
{
    pMyKader = &arg;
    return true;
}
void CVerein::print() const
{
	pMyKader->print();
    for (int i = 0; i < getAnzFuehrung(); ++i) {
        cout << "---------------------" << endl;
        fuehrungMitglieder[i]->print();
    }
}

CVerein::CVerein()
{
	for (int i = 0; i < maxAnzFuehrung; ++i) {
		fuehrungMitglieder[i] = 0x0;
	}
    setAnzFuehrung(0);
}

CVerein::~CVerein() {
	for (int i = 0; i < maxAnzFuehrung; ++i) {
		if (fuehrungMitglieder != 0x0) {
			delete fuehrungMitglieder[i];
		}
	}
}