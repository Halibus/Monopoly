#include <iostream>
#include "Prison.h"

Prison::Prison(string nom, Case* suivante) : Case(nom, suivante) { cout << "Nouvelle case prison." << endl; }

void Prison::arreterSur(Pion pion)
{
	if (pion.getInPrison() == false)
	{
		pion.setInPrison(true);
	}
	else
	{
		pion.setInPrison(false);
	}
}