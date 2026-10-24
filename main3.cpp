#include <iostream>
#include "Utilisateur.hpp"

int main() {
    std::cout << "Etat initial \n";
    std::cout << "Connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n";

    // Connexion de plusieurs utilisateurs
    Utilisateur u1("Amine", "admin");
    std::cout << "Connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n";

    Utilisateur u2("Sara", "visiteur");
    std::cout << "Connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n";

    {
        Utilisateur u3("Younissse", "editeur");
        Utilisateur u4("Luna", "visiteur");
        std::cout << "Connectes : "
                  << Utilisateur::getNbUtilisateursConnectes() << "\n";

        std::cout << " Infos \n";
        u1.afficher();
        u2.afficher();
        u3.afficher();
        u4.afficher();
        std::cout << "\n";
    }   

    std::cout << " Apres le bloc (u3, u4 deconnectes) ";
    std::cout << "Connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

    // Simulation de reconnexions dynamiques
    Utilisateur* u5 = new Utilisateur("Karim", "admin");
    std::cout << "Connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

    delete u5;   // déconnexion manuelle
    std::cout << "Connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

    std::cout << "Fin du programme (destruction auto de u1, u2) ";
    return 0;
}