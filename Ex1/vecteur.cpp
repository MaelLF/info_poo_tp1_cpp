/* 
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Vecteur
Objectif : Voir dans le fichier hpp lié à cette classe
 */
#include "vecteur.hpp"
#include <iostream>
#include <cmath>


Vecteur::Vecteur(){
    _x = 0;
    _y = 0;
}

Vecteur::Vecteur(int x, int y){
    _x = x;
    _y = y;
}

void Vecteur::affiche(){
    std::cout <<"vecteur : (" << _x << " , " << _y << ")" << std::endl;
}

double Vecteur::norme(){
    return sqrt(_x*_x+_y*_y);
}

Vecteur* Vecteur::addition(const Vecteur& v){
    Vecteur* vect = new Vecteur(_x+v._x,_y+v._y);
    return vect;
}
int Vecteur::get_x() {
    return _x;
}

// Getter for _x (const)
int Vecteur::get_x() const {
    return _x;
}

int Vecteur::get_y() {
    return _y;
}

// Getter for _x (const)
int Vecteur::get_y() const {
    return _y;
}

Vecteur::Vecteur(const Vecteur& vect) {
    _x = vect._x;
    _y = vect._y;
}

Vecteur& Vecteur::operator=(const Vecteur& vect) {
    //si ce n'est pas strictement (au sens d'adressage) le même objet
    if (this != &vect) {
        _x = vect._x;
        _y = vect._y;
    }
    return *this;
}