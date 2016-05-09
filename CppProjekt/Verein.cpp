#include "Verein.h"

bool CVerein::add(const CFuehrung &arg)
{
    CVerein::fuehrungMitglieder[anzFuehrung] = &arg;
    anzFuehrung++;
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
    for (int i = 0; i < anzFuehrung; ++i) {
        cout << "---------------------" << endl;
        fuehrungMitglieder[i]->print();
    }
}

CVerein::CVerein()
{
    anzFuehrung = 0;
}