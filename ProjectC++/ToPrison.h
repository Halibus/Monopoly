#pragma once
#include "Case.h"
#include "Pion.h"
#include "Joueur.h"
#include "Prison.h"

class ToPrison :
    public Case
{
public:
    ToPrison(string nom, Case* suivante);
    void arreterSur(Pion pion, Prison prison);
};

