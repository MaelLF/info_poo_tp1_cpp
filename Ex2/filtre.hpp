/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Filtre
Objectif : Création d'une classe abstraite Filtre possédant :
 - un argument nomfiltre qui servira a la construction et l'appel de la fonction apply
 - une fonction d'application du filtre (fonction virtuelle car redéfinie pour les classes dépendantes de Filtre)
 - Un destructeur par défaut des éléments de filtre car certaines classes auront des allocations dynamiques
 - Un constructeur à partir du nom du filtre passé en argument
 */
#include <iostream>
#include <fstream>
#include "image.hpp"
#ifndef filtre_H
#define filtre_H

class Filtre {
    public :
        Filtre(const std::string& name) : nomfiltre(name){}
        virtual ~Filtre() {}
        virtual void apply(Image& i) const = 0;
             std::string get_name() const{
                return nomfiltre;
            }

    protected :
        std::string nomfiltre;
}
;
#endif