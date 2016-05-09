#pragma once
#include <string>
#include "Fuehrung.h"
#include "Kader.h"
using namespace std;

class CVerein {
public:
    static const int maxAnzFuehrung = 20;
    CVerein();
	~CVerein();
    bool add(const CFuehrung &arg);
    bool add(const CKader &arg);
    void print() const;
 private:
    const CKader * pMyKader;
    int anzFuehrung;
    const CFuehrung * fuehrungMitglieder[maxAnzFuehrung];
};