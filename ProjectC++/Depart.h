#pragma once
#include "Case.h"
#include "Pion.h"
#include "Joueur.h"

class Depart :
    public Case
{
public:
    Depart(string nom, Case* suivante);
    Depart(string nom);
    void passerPar(Pion pion);
};

