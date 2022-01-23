#include <iostream>
#include "Propriete.h"

Propriete::Propriete() {}

Propriete::Propriete(string nom, Case* suivante, int loyer, int prixAchat)
{
	this->nom = nom;
	this->suivante = suivante;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
	cout << "Nouvelle case propri¨¦t¨¦." << endl;
}

int Propriete::getLoyer()
{
	return this->loyer;
}

void Propriete::setLoyer(int loyer)
{
	this->loyer = loyer;
}

int Propriete::getPrixAchat()
{
	return this->prixAchat;
}

void Propriete::setPrixAchat(int prixAchat)
{
	this->prixAchat = prixAchat;
}