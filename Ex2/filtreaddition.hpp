/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Filtreaddition
Objectif : Création d'une classe dérivée de Filtre possédant :
 - Un argument représentant la valeur a additionner à chaque pixel de l'image
 - Un constructeur faisant appel au constructeur de la Classe filtre
 - Les arguments et méthodes de la classe Filtre (voir hpp lié)
 - La redéfinition de la méthode apply tel que définie dans le sujet
 */
#include "filtre.hpp"
#ifndef filtreadd_H
#define filtreadd_H

class Filtreaddition : public Filtre{
    public:
    Filtreaddition(const std::string& name, int cnste) : Filtre(name), cnste(cnste) {}    
    virtual void apply(Image& i) const override;
    private : 
        int cnste;
}



;
#endif