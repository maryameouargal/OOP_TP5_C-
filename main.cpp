#include <iostream>
#include "Produit.hpp"

int main() {
    Produit p1("Clavier", 50.0);
    Produit p2("Souris", 20.0);
    Produit p3("Ecran", 150.0);

    std::cout << " Prix avec TVA par defaut ("
              << Produit::getTauxTVA() << "%) \n";
    p1.afficher();
    p2.afficher();
    p3.afficher();

    Produit::modifierTVA(10.0f);

    std::cout << "\nApres modification de la TVA ("
              << Produit::getTauxTVA() << "%) \n";
    p1.afficher();
    p2.afficher();
    p3.afficher();

    Produit::modifierTVA(25.0f);

    std::cout << "\nApres 2e modification ("
              << Produit::getTauxTVA() << "%) \n";
    p1.afficher();

    return 0;
}