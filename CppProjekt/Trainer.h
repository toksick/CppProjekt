// Copyright 2016 Toksick
#pragma once
#include "Person.h"
#include <string>
class CTrainer : public CPerson {
 public:
    CTrainer(string name, string vorname, unsigned int alter);
    virtual ~CTrainer();
    const virtual void print();
    virtual void setLizenzstufe(unsigned int lizenzstufe);
 private:
    unsigned int lizenzStufe;
};

