/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe SuiteDeFiltre
Objectif : Création d'une classe dérivée de Filtre possédant :
 - Un argument stockant une liste de filtres
 - Un constructeur faisant appel au constructeur de la Classe filtre
 - Un destructeur car un des arguments (liste filtre) est alloué dynamiquement
 - Les arguments et méthodes de la classe Filtre (voir hpp lié)
 - La redéfinition de la méthode apply tel que définie dans le sujet
 - Méthode d'ajout de filtre à l'argument listefiltre
 */
#include "filtre.hpp"
#include <vector>

class SuiteDeFiltre : public Filtre {
public:
    SuiteDeFiltre(const std::string& name);
    virtual ~SuiteDeFiltre(); 
    virtual void apply(Image& i) const override;
    void add(Filtre* f);
private:
    std::vector<Filtre*> listefiltre; 
};
