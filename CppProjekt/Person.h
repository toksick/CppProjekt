#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class CPerson
{
protected:
	string name;
	string vorname;
	unsigned int alter;
public:
	const virtual void print();
	CPerson();
	~CPerson();
};

