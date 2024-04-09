/* 
Auteur : Le Floch Mael
Objet : Tests des éléments de la classe Vecteur
Objectif : Voir dans le fichier hpp de vecteur
 */

#include "vecteur.hpp"
#include <iostream>

int main(){
    Vecteur a(3,4);
    Vecteur b;
    Vecteur d(1,2);
    a.affiche();
    b.affiche();
    std::cout << "Norme de a :" << a.norme() << std::endl;
    Vecteur* c;
    c = a.addition(d);
    c->affiche();
    delete c;
    std::cout << "x:" << a.get_x() << " y:" << a.get_y() << std::endl;
    const Vecteur q(1,2);
    std::cout << "x:" << q.get_x() << " y:" << q.get_y() << std::endl;
    Vecteur m(q);
    m.affiche();
    Vecteur i = a;
    i.affiche();

    Vecteur v1(3, 4);
    Vecteur v2(6, 8);
    std::cout << "Avant l'assignement : " << std::endl;
    v1.affiche();
    v2.affiche();

    v1 = v2;

    std::cout << "Après l'assignement : " << std::endl;
    v1.affiche();
    v2.affiche();
}