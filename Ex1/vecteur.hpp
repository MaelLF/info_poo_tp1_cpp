/* 
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Vecteur
Objectif : Création d'une classe Vecteur possédant :
 - 2 arguments
 - Un constructeur par défaut qui initie un vecteur (0,0)
 - Une méthode d'affichage, de calcul de norme, d'addition.
 - Un constructeur par copie et un par défintion des arguemnts x et y
 - La redéfinition de l'opérateur '=' pour cette classe
 - les getters de cette classe (const et non const)
 */
#include <iostream>
#ifndef Vecteur_H
#define Vecteur_H

class Vecteur {
    public :
        Vecteur();
        Vecteur(int x,int y);
        void affiche();
        double norme();
        Vecteur* addition(const Vecteur& v);
        int get_x();
        int get_x() const;
        int get_y();
        int get_y() const;
        Vecteur(const Vecteur& vect);
        Vecteur& operator=(const Vecteur& vect);
    private : 
        int _x;
        int _y;
};
#endif //

// pas besoin de destructeur car pas d'allocation dynamique dans la classe