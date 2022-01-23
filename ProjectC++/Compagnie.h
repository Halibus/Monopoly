#pragma once
#include "Propriete.h"

class Compagnie :
    public Propriete
{
    public:
        Compagnie(string nom, Case* suivante, int loyer, int prixAchat);
        Compagnie(string nom);
        void arreterSur(Pion* pion);
};

