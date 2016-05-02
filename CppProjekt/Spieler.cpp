#include "Spieler.h"



CSpieler::CSpieler()
{
	nummer = 0;
}


CSpieler::~CSpieler()
{
}


void CSpieler::print()
{
	CPerson::print();
	cout << "Position: " << this->position << " Nummer: " << this->nummer << endl;
}
