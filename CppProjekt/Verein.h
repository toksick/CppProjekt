#include <string>
#include "Fuehrung.h"
#include "Kader.h"
using namespace std;

class CVerein {
 private:
    const CKader * pMyKader;
    unsigned int anzFuehrung;
    static const int maxAnzFuehrung = 20;
    const CFuehrung * fuehrungMitglieder[maxAnzFuehrung];
public:
    CVerein();
    bool add(const CFuehrung &arg);
    bool add(const CKader &arg);
    const void print();
};