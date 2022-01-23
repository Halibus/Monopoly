#include <iostream>
#include "Joueur.h"

Joueur::Joueur() {}

Joueur::Joueur(string nom, Pion* pion, int solde)
{
	this->nom = nom;
	this->pion = pion;
	this->solde = solde;
	cout << "Nouveau joueur initi��." << endl;
}

void Joueur::operation()
{

}

string Joueur::getNom()
{
	return this->nom;
}

void Joueur::setNom(string nom)
{
	this->nom = nom;
}

void Joueur::inputNom()
{
	string nom_joueur = "";
	cout << "Nom du joueur : ";
	cin >> nom_joueur;
	this->setNom(nom_joueur);
}

Pion* Joueur::getPion()
{
	return this->pion;
}

void Joueur::setPion(Pion* pion)
{
	this->pion = pion;
}

void Joueur::inputPion()
{
	string nom_pion = "";
	cout << "Pion choisi pour le joueur : ";
	cin >> nom_pion;
	this->setPion(nom_pion);
}

int Joueur::getSolde()
{
	return this->solde;
}

void Joueur::setSolde(int solde)
{
	this->solde = solde;
}

void Joueur::crediter(int montant)
{

}

void Joueur::debiter(int montant)
{

}

void Joueur::jouer(Plateau plateau, Gobelet gobelet)
{
	if (!(this->ruine || (this->pion).getInPrison()))
	{
		int deplacement = gobelet.getvaleur();
		(this->pion).deplacer((this->pion).getPosition() + deplacement % 40);
		plateau.cases((this->pion).getPosition()).arreterSur();
	}
}

