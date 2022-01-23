#include <iostream>
#include "Gare.h"

Gare::Gare(string nom) {}

Gare::Gare(string nom, Case* suivante, int loyer, int prixAchat)
{
	this->nom = nom;
	this->suivante = suivante;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
	cout << "Nouvelle case gare." << endl;
}

void Gare::arreterSur()
{

}