#pragma once
#include <string>
#include "Plateau.h"
#include "Gobelet.h"

class Pion;

class Joueur
{
public:
	Joueur(int solde = 1500);
	Joueur(string nom, Pion* pion, int solde = 1500);
	void operation();
	string getNom();
	void setNom(string nom);
	void inputNom();
	Pion* getPion();
	void setPion(Pion* pion);
	void inputPion();
	void jouer(Plateau plateau, Gobelet gobelet);
	int getSolde();
	void setSolde(int solde);
	void crediter(int montant);
	void debiter(int montant);

private:
	string nom;
	Pion* pion;
	int solde;
	bool ruine = false;
};

