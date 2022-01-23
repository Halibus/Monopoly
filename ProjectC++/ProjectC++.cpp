#include <iostream>
#include <string>
#include "Case.h"
#include "Chance.h"
#include "Communaute.h"
#include "Compagnie.h"
#include "De.h"
#include "Depart.h"
#include "Gare.h"
#include "Gobelet.h"
#include "Joueur.h"
#include "Pion.h"
#include "Plateau.h"
#include "Prison.h"
#include "Propriete.h"
#include "Terrain.h"
#include "ToPrison.h"
#include "Impot.h"
#include "Parc.h"
#include "Police.h"
#include "Jeu.h"
using namespace std;

int main()
{
    cout << "Bienvenue à notre jeu de monopoly via C++!\n";

    int nb_joueurs = 0;

    cout << "Combien y a-t-il de joueurs ?\n";
    
    cin >> nb_joueurs;

    Jeu jeu(nb_joueurs);

    // Plateau plateau();

    // jeu.setPlateau(plateau);

    jeu.commencerLaPartie();

    Depart c0("Case départ");
    Propriete c1("Boulevard de Belleville");
    Communaute c2("Caisse de communauté");
    Propriete c3("Rue Lecourbe");
    Impot c4("Impots sur le revenu");
    Gare c5("Gare Montparnasse");
    Propriete c6("Rue de Vaugirard");
    Chance c7("Chance");
    Propriete c8("Rue de Courcelles");
    Propriete c9("Avenue de la République");
    Prison c10("Prison");
    Propriete c11("Boulevard de la Villette");
    Compagnie c12("Compagnie de distribution d'électricité");
    Propriete c13("Avenue de Neuilly");
    Propriete c14("Rue de Paradis");
    Gare c15("Gare de Lyon");
    Propriete c16("Avenue Mozart");
    Communaute c17("Caisse de communauté");
    Propriete c18("Boulevard Saint-Michel");
    Propriete c19("Place Pigalle");
    Parc c20("Parc Gratuit");
    Propriete c21("Avenue Matignon");
    Chance c22("Chance");
    Propriete c23("Boulevard Malesherbes");
    Propriete c24("Avenue Henri-Martin");
    Gare c25("Gare du Nord");
    Propriete c26("Faubourg Saint-Honoré");
    Propriete c27("Place de la Bourse");
    Compagnie c28("Compagnie de distribution des eaux");
    Propriete c29("Rue Lafayette");
    Police c30("Aller en prison");
    Propriete c31("Avenue de Breteuil");
    Propriete c32("Avenue Foch");
    Communaute c33("Caisse de communaute");
    Propriete c34("Boulevard des Capucines");
    Gare c35("Gare Saint-Lazare");
    Chance c36("Chance");
    Propriete c37("Avenue des Champs-Elysees");
    Impot c38("Taxe de Luxe");
    Propriete c39("Rue de la Paix");
    
    Case plateau[40] = {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36, c37, c38, c39};

    string pions[15] = {"Chapeau Haut-de-Forme", "Voiture", "Bateau", "Dé à coudre", "Chaussure", "Brouette", "Chien", "Fer à repasser", " Cavalier et son Cheval", "Chat", "Sac de Billets", "Canon", "Lanterne", "Cheval à Bascule", "Sac à Mains"};

    try
    {
        if (!(3 <= nb_joueurs && nb_joueurs <= 8))
        {
            throw(nb_joueurs);
        };

        // Joueur joueurs[nb_joueurs];

        // for(int i = 0; i < nb_joueurs; i++)
        // {
        //     string nom_joueur = "";
        //     cout << "Nom du joueur " << (i+1) << " : ";
        //     cin >> nom_joueur;
        //     Joueur j1(nom_joueur, int 1500);
        //     joueurs[i] = j1;
        //     string nom_pion = "";
        //     cout << "Pion choisi pour le joueur " << (i+1) << " : ";
        //     cin >> nom_pion;
        //     Pion pion(nom_pion, int 1500);
        //     joueurs[i].setPion(pion);
        // };

        Jeu jeu(nb_joueurs);
        jeu.commencerLaPartie();

    }
    catch (int nb)
    {
        cout << "Le jeu du Monopoly se joue de 3 à 8 joueurs.";
        cout << "Vous avez " << nb << "joueurs.";
    }

    return 0;
}
