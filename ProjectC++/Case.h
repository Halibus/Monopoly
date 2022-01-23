#pragma once
#include <string>
using namespace std;

class Case
{
public:
	Case();
	Case(string nom, Case* suivante);
	string getNom();
	void setNom(string nom);
	Case* getSuivante();
	void setSuivante(Case* suivante);
	virtual void arreterSur();

protected:
	string nom;
	Case* suivante;
};

