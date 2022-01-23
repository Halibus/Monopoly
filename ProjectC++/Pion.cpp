#include <iostream>
#include "Pion.h"

Pion::Pion(Joueur* joueur, Case position, string nom)
{
	this->joueur = joueur;
	this->position = position;
	this->nom = nom;
	cout << "Nouveau pion initi¨¦." << endl;
}

Joueur* Pion::getJoueur()
{
	return this->joueur;
}

void Pion::setJoueur(Joueur* joueur)
{
	this->joueur = joueur;
}

Case Pion::getPosition()
{
	return this->position;
}

void Pion::setPosition(Case position)
{
	this->position = position;
}

string Pion::getNom()
{
	return this->nom;
}

void Pion::setNom(string nom)
{
	this->nom = nom;
}

bool Pion::getInPrison()
{
	return inPrison;
}

void Pion::setInPrison(bool inPrison)
{
	this->inPrison = inPrison;
}