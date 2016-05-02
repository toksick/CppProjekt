#include "Person.h"


CPerson::CPerson()
{
}


CPerson::~CPerson()
{
}

void CPerson::print(){
	cout << "Name: " << this->name << ", " << this->vorname << endl;
	cout << "Alter: " << this->alter << endl;
}
