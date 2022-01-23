#pragma once
#include "Case.h"

class Joueur;

class Pion
{
public:
	Pion(Joueur* joueur, Case position, string nom);
	Joueur* getJoueur();
	void setJoueur(Joueur* joueur);
	Case getPosition();
	void setPosition(Case position);
	string getNom();
	void setNom(string nom);
	bool getInPrison();
	void setInPrison(bool inPrison);

private:
	Joueur* joueur;
	Case position;
	string nom;
	bool inPrison = false;

};

