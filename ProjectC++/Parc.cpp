#include <iostream>
#include "Parc.h"

Parc::Parc(string nom) {}

Parc::Parc(string nom, Case* suivante) : Case(nom, suivante) { cout << "Nouvelle case communaut��." << endl; }

void Parc::arreterSur(Pion pion)
{
	int montant = (*pion.getJoueur()).getSolde();
	(*pion.getJoueur()).setSolde(montant + 1000); //ajouter 1000 euros
}
