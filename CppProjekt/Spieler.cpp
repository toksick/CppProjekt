#include "Spieler.h"



CSpieler::CSpieler()
{
	nummer = 0;
}

void CSpieler::print() const
{
	CPerson::print();
	cout << "Position: " << this->position << " Nummer: " << this->nummer << endl;
}
