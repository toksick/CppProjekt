#pragma once
#include "Person.h"
#include <string>
class CTrainer : public CPerson {
 public:
    CTrainer(string name, string vorname, unsigned int alter);
    virtual void print() const;
    void setLizenzstufe(unsigned int lizenzstufe);
 private:
    unsigned int lizenzStufe;
};

