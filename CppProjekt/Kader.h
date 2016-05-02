#include <string>
#include "Person.h"

class CKader {
 private:
    unsigned int anzKader;
    static const int maxAnzKader = 50;
    const CPerson * pKaderMitglieder[maxAnzKader];
 public:
    CKader();
    bool add(const CPerson &arg);
    const void print();
};
