#include <iostream>
#include "Name.h"
#include "Janis.h"

using namespace std;

Janis::Janis(string n)
{
	name=(n.length() > 0) ? n : "DefaultName";
}

void Janis::setName(string n)
{
	name=(n.length() > 0) ? n : "DefaultName";
}

void Janis::Print() const
{
	cout << name << endl;
}
