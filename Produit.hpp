#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>
#include <iostream>

class Produit {
private:
    std::string nom;
    double prixHT;
    static float tauxTVA;   // taux partagé par TOUS les produits

public:
    // Constructeur
    Produit(const std::string& n, double prix);

    // Prix toutes taxes comprises
    double getPrixTTC() const;

    // Accesseurs utiles
    std::string getNom() const;
    double getPrixHT() const;

    // Affiche le produit
    void afficher() const;

    // Modifie le taux de TVA pour tous les produits
    static void modifierTVA(float nouveauTaux);

    // Consulter le taux courant
    static float getTauxTVA();
};

#endif