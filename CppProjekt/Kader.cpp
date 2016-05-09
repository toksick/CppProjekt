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
	for (int i = 0; i < maxAnzKader; ++i) {
		pKaderMitglieder[i] = 0x0;
	}
    anzKader = 0;
}
CKader::~CKader() {
	for (int i = 0; i < maxAnzKader; ++i) {
		if (pKaderMitglieder[i] != 0x0) {
			delete pKaderMitglieder[i];
		}
	}
}