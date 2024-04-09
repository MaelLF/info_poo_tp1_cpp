/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe SuiteDeFiltre
Objectif : Voir fichier hpp lié
 */

#include "suitedefiltre.hpp"

SuiteDeFiltre::SuiteDeFiltre(const std::string& name) : Filtre(name) {}

SuiteDeFiltre::~SuiteDeFiltre() {
    for (Filtre* f : listefiltre) { //itération sur listefiltre
        delete f; //Appel au destructeur par défaut de la classe Filtre
    }
}

void SuiteDeFiltre::apply(Image& i) const {
    for (Filtre* f : listefiltre) {
        f->apply(i); //Appel au méthode apply des différents objets de la liste dépendamment de leur classe (addition,moyenne,suitefiltre)
    }
}

void SuiteDeFiltre::add(Filtre* f) { //méthode d'ajout d'un filtre
    listefiltre.push_back(f);
}
