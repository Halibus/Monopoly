#pragma once
#include "Case.h"
#include "Pion.h"
#include "Joueur.h"

class Police :
    public Case
{
public:
    Police(string nom, Case* suivante);
    Police(string nom);
    void arreterSur(Pion pion);
};

