#include "Case.h"
#include <iostream>

Case::Case() {}

Case::Case(string nom, Case* suivante)
{
	this->nom = nom;
	this->suivante = suivante;
	cout << "Nouvelle case." << endl;
}

string Case::getNom()
{
	return this->nom;
}

void Case::setNom(string nom)
{
	this->nom = nom;
}

Case* Case::getSuivante()
{
	return this->suivante;
}

void Case::setSuivante(Case* suivante)
{
	this->suivante = suivante;
}

void Case::arreterSur() {}