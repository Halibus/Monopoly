#include <iostream>
#include "Police.h"

Police::Police(string nom, Case* suivante) : Case(nom, suivante) { cout << "Nouvelle case police." << endl; }

void Police::arreterSur(Pion pion)
{
	if (pion.getInPrison() == false)
	{
		pion.setInPrison(true);
	}
	else
	{
		throw();
	}
	catch ()
    {
        cout << "Le joueur " << pion.joueur() << " ne peut pas aller en prison car il y est déjà.";
    }
}