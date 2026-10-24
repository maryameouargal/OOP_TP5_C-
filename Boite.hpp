#ifndef BOITE_HPP
#define BOITE_HPP

#include <iostream>

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;
    static int nbBoites;   

public:
    // Constructeur
    Boite(double l, double w, double h);

    // Destructeur 
    ~Boite();

    // Calcule le volume 
    double volume() const;

    // Affiche les dimensions de la boîte
    void afficher() const;

    // Accesseur statique : retourne le nombre de boîtes existantes
    static int getNombreBoites();
};

#endif