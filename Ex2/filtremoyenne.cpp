/*
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe Filtremoyenne
Objectif : Voir le fichier hpp lié
 */
#include "filtremoyenne.hpp"

void Filtremoyenne::apply(Image& image) const {
    for (size_t i = n/2; i <= image.get_h()-n/2; ++i) {
        for (size_t j = n/2; j <= image.get_w()-n/2; ++j) {
            int value = moyenne(image, i, j);
            image.set(i, j, value);
        }
    }
}

int Filtremoyenne::moyenne(Image& image, int i, int j) const {
    int val = 0;
    for (int k = i - n/2; k <= i + n/2; k++) {
        for (int f = j - n/2; f <= j + n/2; f++) {
            val += image.get(k, f);
        }
    }
    return val / (n * n);
}
