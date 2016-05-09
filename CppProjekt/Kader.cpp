#include "Kader.h"

bool CKader::add(const CPerson &arg)
{
    pKaderMitglieder[anzKader] = &arg;
    anzKader++;
    return true;
}
void CKader::print() const
{
	for (int i = 0; i < anzKader; ++i)
	{
        cout << "-----------------------" << endl;
		pKaderMitglieder[i]->print();
	}
}

CKader::CKader()
{
    anzKader = 0;
}