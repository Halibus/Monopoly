#include <iostream>
#include "Gobelet.h"
using namespace std;

Gobelet::Gobelet(int nbDe)
{
	this->nbDe = nbDe;

	cout << "Nouveau gobelet cr����." << endl;
}

int Gobelet::getvaleur()
{
	// De de = De(6);
	int counter = 0;
	for (int i = 0; i < this->nbDe; i++)
	{
		counter += (this->de).getvaleur(); //
	}
	return counter;
}
