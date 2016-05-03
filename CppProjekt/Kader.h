#pragma once
#include <string>
#include "Person.h"

class CKader {
 public:
    static const int maxAnzKader = 50;
    CKader();
    bool add(const CPerson &arg);
    void print() const;
 private:
    int anzKader;
    const CPerson * pKaderMitglieder[maxAnzKader];
};
