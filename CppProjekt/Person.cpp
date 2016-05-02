#include "Person.h"


CPerson::CPerson()
{
}


CPerson::~CPerson()
{
}

const void CPerson::print(){
	cout << "Name: " << this->name << ", " << this->vorname << endl;
	cout << "Alter: " << this->alter << endl;
}
