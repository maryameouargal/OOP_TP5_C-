#include "Produit.hpp"

// Initialisation du membre statique 
float Produit::tauxTVA = 20.0f;

Produit::Produit(const std::string& n, double prix)
    : nom(n), prixHT(prix) {}

double Produit::getPrixTTC() const {
    // On n'utilise QUE le taux statique 
    return prixHT * (1.0 + tauxTVA / 100.0);
}

std::string Produit::getNom() const {
    return nom;
}

double Produit::getPrixHT() const {
    return prixHT;
}

void Produit::afficher() const {
    std::cout << "Produit : " << nom
              << " | HT = " << prixHT
              << " | TTC = " << getPrixTTC()
              << " (TVA " << tauxTVA << "%)\n";
}

void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}

float Produit::getTauxTVA() {
    return tauxTVA;
}