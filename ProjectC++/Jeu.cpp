#include <iostream>
#include "Jeu.h"
#include "De.h"
#include "Plateau.h"
using namespace std;

Jeu::Jeu(int nb_joueurs)
{
    Plateau newPlateau;
    this->plateau = newPlateau;
    this->nb_joueurs = nb_joueurs;
    this->nb_joueurs_restant = nb_joueurs;
}

Plateau Jeu::getPlateau()
{
	return this->plateau;
}

void Jeu::setPlateau(Plateau plateau)
{
	this->plateau = plateau;
}

void Jeu::commencerLaPartie()
{
    // this->setNbjoueurs(this->getNbjoueurs()); // Initialise le nombre de joueurs
    for(int i = 0; i < this->nb_joueurs; i++)
    {
        this->joueurs[0].inputNom();
        this->joueurs[0].inputPion();
    };
    Gobelet gobelet(2);
	gobelet.setDe(6);
    Plateau plateau;
    De de_depart(this->nb_joueurs);
    int joueur_actuel = de_depart.getvaleur(); // Premier joueur
    while (this->nb_joueurs_restant > 1)
    {
        this->joueurs[joueur_actuel].jouer(plateau, gobelet);
        joueur_actuel++;
        joueur_actuel = joueur_actuel % nb_joueurs;
    };
	
}