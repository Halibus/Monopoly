#pragma once
#include "Plateau.h"
#include "Joueur.h"

class Jeu
{
    private:
        Plateau plateau;
        int nb_joueurs;
        Joueur joueurs[8];
        int nb_joueurs_restant;
    public:
        Jeu(int nb_joueurs);
        void commencerLaPartie();
        void setPlateau(Plateau plateau);
        Plateau getPlateau();
        void setNbjoueurs(int nb_joueurs);
        int getNbjoueurs();
};

