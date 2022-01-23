#include <iostream>
#include "Compagnie.h"

Compagnie::Compagnie(string nom) {}

Compagnie::Compagnie(string nom, Case* suivante, int loyer, int prixAchat)
{
	this->nom = nom;
	this->suivante = suivante;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
	cout << "Nouvelle case compagnie." << endl;
}

void Compagnie::arreterSur(Pion* pion)
{

}