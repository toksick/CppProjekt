#pragma once
#include <string>
#include <iostream>
//#include <fstream>
using namespace std;

class CPerson
{
protected:
	string name;
	string vorname;
	unsigned int alter;
public:
	virtual void print() const;
	CPerson();
};

