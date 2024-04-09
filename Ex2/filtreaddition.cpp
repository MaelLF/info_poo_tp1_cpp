/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Filtreaddition
Objectif : Voir le fichier hpp correspondant
 */

#include "filtreaddition.hpp"
void Filtreaddition::apply(Image& image) const{
    for (size_t i = 0; i < image.get_h(); ++i) {
        for (size_t j = 0; j < image.get_w(); ++j) {
                int value = image.get(i,j) + cnste;
                    if (value < 0) {
                        value = 0;
                    }
                    
                    if (value > 255){
                        value = 255;
                    }
                image.set(i,j,value);
        }
    }
}