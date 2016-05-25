#pragma once
#include "Person.h"
#include <string>
class CTrainer : public CPerson {
 public:
    CTrainer(string name, string vorname, unsigned int alter);
    virtual void print() const;
 private:
    unsigned int lizenzStufe;
 public:
 	unsigned int getLizenzStufe() { return lizenzStufe; }
 	void setLizenzstufe() { this->lizenzStufe = lizenzStufe; }
};

