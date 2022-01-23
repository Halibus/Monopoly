#pragma once
#include "Propriete.h"

class Terrain :
    public Propriete
{
public:
    Terrain(string nom, Case* suivante, int loyer, int prixAchat);
    Terrain(string nom);
    void arreterSur(Pion* pion);
};

