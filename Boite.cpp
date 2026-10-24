#include "Boite.hpp"

// Initialisation du membre statique 
int Boite::nbBoites = 0;

Boite::Boite(double l, double w, double h)
    : longueur(l), largeur(w), hauteur(h) {
    ++nbBoites;   
}

Boite::~Boite() {
    --nbBoites;  
}

double Boite::volume() const {
    return longueur * largeur * hauteur;
}

void Boite::afficher() const {
    std::cout << "Boite [L=" << longueur
              << " x l=" << largeur
              << " x H=" << hauteur
              << "]  -> Volume = " << volume() << "\n";
}

int Boite::getNombreBoites() {
    return nbBoites;
}