#include "Utilisateur.hpp"

// Initialisation du compteur 
int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(const std::string& n, const std::string& r)
    : nom(n), role(r) {
    ++nbUtilisateursConnectes;   // connexion
    std::cout << " Connexion  : " << nom
              << " (" << role << ")\n";
}

Utilisateur::~Utilisateur() {
    --nbUtilisateursConnectes;   // déconnexion
    std::cout << "Deconnexion : " << nom << "\n";
}

void Utilisateur::afficher() const {
    std::cout << "Utilisateur : " << nom
              << " | Role : " << role << "\n";
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}