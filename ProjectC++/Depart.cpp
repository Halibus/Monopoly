#include <iostream>
#include "Depart.h"

Depart::Depart(string nom, Case* suivante) : Case(nom, suivante) { cout << "Nouvelle case d¨¦part." << endl; }

void Depart::passerPar(Pion pion)
{
	int montant = (*pion.getJoueur()).getSolde();
	(*pion.getJoueur()).setSolde(montant + 1000); //ajouter 1000 euros
}