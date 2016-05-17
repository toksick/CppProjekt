#include "Kader.h"

bool CKader::add(const CPerson &arg)
{
    pKaderMitglieder[getAnzKader()] = &arg;
    setAnzKader(getAnzKader()+1);
    return true;
}
void CKader::print() const
{
	for (int i = 0; i < getAnzKader(); ++i)
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
    setAnzKader(0);
}
CKader::~CKader() {
	for (int i = 0; i < maxAnzKader; ++i) {
		if (pKaderMitglieder[i] != 0x0) {
			delete pKaderMitglieder[i];
		}
	}
}