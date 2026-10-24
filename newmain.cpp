#include <iostream>
#include "Boite.hpp"

int main() {
    std::cout << " Debut du programme\n";
    std::cout << "Boites existantes : " << Boite::getNombreBoites() << "\n\n";

    {
        Boite b1(10, 5, 2);
        Boite b2(4, 4, 4);
        Boite b3(7, 3, 1.5);

        std::cout << "Dans le bloc\n";
        b1.afficher();
        b2.afficher();
        b3.afficher();
        std::cout << "Boites existantes : " << Boite::getNombreBoites() << "\n\n";
    }   // <-- b1, b2, b3 détruites ici (fin de portée)

    std::cout << "Apres le bloc \n";
    std::cout << "Boites existantes : " << Boite::getNombreBoites() << "\n\n";

    // Création dynamique pour illustrer destructeur manuel
    Boite* b4 = new Boite(2, 2, 2);
    std::cout << "Apres new  -> " << Boite::getNombreBoites() << " boite(s)\n";

    delete b4;   // appel explicite du destructeur
    std::cout << "Apres delete -> " << Boite::getNombreBoites() << " boite(s)\n";

    std::cout << "\nFin du programme \n";
    return 0;
}