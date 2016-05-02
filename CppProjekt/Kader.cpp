#include "Kader.h"

bool CKader::add(const CPerson &arg)
{
    pKaderMitglieder[anzKader] = &arg;
    anzKader++;
    return true;
}
const void CKader::print()
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