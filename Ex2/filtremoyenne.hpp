/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Filtremoyenne
Objectif : Création d'une classe dérivée de Filtre possédant :
 - Un argument représentant la taille du filtre moyenneur
 - Un constructeur faisant appel au constructeur de la Classe filtre
 - Les arguments et méthodes de la classe Filtre (voir hpp lié)
 - La redéfinition de la méthode apply tel que définie dans le sujet

 On ne s'interresse pas dans cette méthode au effets de bords des filtres moyenneurs
 */

#include "filtre.hpp"
#ifndef filtremoy_H
#define filtremoy_H

class Filtremoyenne : public Filtre{
    public:
    Filtremoyenne(const std::string& name, int n) : Filtre(name), n(n) {}    
    virtual void apply(Image& i) const override;
    int moyenne(Image& image, int i, int j) const;

    private : 
        int n;
}



;
#endif