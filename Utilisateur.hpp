#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>
#include <iostream>

class Utilisateur {
private:
    std::string nom;
    std::string role;
    static int nbUtilisateursConnectes;   

public:
    // Constructeur 
    Utilisateur(const std::string& n, const std::string& r);

    // Destructeur 
    ~Utilisateur();

    // Affiche les infos de l'utilisateur courant
    void afficher() const;

    // Accesseur statique
    static int getNbUtilisateursConnectes();
};

#endif