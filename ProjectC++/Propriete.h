#pragma once
#include "Case.h"
#include "Joueur.h"

class Propriete :
    public Case
{
public:
    Propriete() {}
    Propriete(string nom);
    Propriete(string nom, Case* suivante, int loyer, int prixAchat);
    int getLoyer();
    void setLoyer(int loyer);
    int getPrixAchat();
    void setPrixAchat(int prixAchat);
protected:
    int loyer;
    int prixAchat;
    Joueur* proprietaire = NULL;
};

