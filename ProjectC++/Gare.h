#pragma once
#include "Propriete.h"

class Gare :
    public Propriete
{
    public:
        Gare(string nom, Case* suivante, int loyer, int prixAchat);
        Gare(string nom);
        void arreterSur(Pion* pion);
};

