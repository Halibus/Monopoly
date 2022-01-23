#include <iostream>
#include "Terrain.h"

Terrain::Terrain(string nom, Case* suivante, int loyer, int prixAchat)
{
	this->nom = nom;
	this->suivante = suivante;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
	cout << "Nouvelle case terrain." << endl;
}

void Terrain::arreterSur(Pion* pion)
{

}
