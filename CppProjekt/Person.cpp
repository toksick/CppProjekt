#include "Person.h"


CPerson::CPerson()
{
}

void CPerson::print() const
{
	cout << "Name: " << this->name << ", " << this->vorname << endl;
	cout << "Alter: " << this->alter << endl;
}
