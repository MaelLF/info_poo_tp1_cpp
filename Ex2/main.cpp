/*
Auteur : Le Floch Mael
Objet : Tests des classes Image, Filtre et dérivées de la classe Filtre.
Objectif : Application de filtres à une image
 */
#include "image.hpp"
#include "filtreaddition.hpp"
#include "filtremoyenne.hpp"
#include "suitedefiltre.hpp"
#include <iostream>

int main() {

    Image myImage("cairo.pgm");


    size_t width = myImage.get_w();
    size_t height = myImage.get_h();
    std::cout << "Dimension Img: " << width << " x " << height << std::endl;

    unsigned char pixel = myImage.get(0, 0);
    std::cout << "Valeur du pixel (0, 0): " << static_cast<int>(pixel) << std::endl;


    myImage.set(0, 0, 255);


    Filtreaddition* add = new Filtreaddition("Filtreaddition", 50);
    Filtremoyenne* mult = new Filtremoyenne("Filtremoyenne", 7);

    // Application des filtres 1 par 1
    //add->apply(myImage);
    //mult->apply(myImage);

    // Application des filtres par suite de filtre
    SuiteDeFiltre suiteDeFiltre("SuiteDeFiltre");
    suiteDeFiltre.add(add);
    suiteDeFiltre.add(mult);
    suiteDeFiltre.apply(myImage);
    myImage.write("modified_cairo2.pgm");
    //Pas de leaks selon valgrind
    return 0;
}

