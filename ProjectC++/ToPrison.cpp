#include <iostream>
#include "ToPrison.h"

ToPrison::ToPrison(string nom, Case* suivante) : Case(nom, suivante) { cout << "Nouvelle case toprison." << endl; }

void ToPrison::arreterSur(Pion pion, Prison prison)
{
	pion.setPosition(prison);
	prison.arreterSur(pion);
}