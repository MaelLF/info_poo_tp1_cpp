/* 
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe image
Objectif : Création d'une classe image possédant :
 - 3 arguments (2 de taille et 1 allocation dynamique contenant les données de l'image)
 - Un constructeur par nom de fichier qui s'appuie sur la méthode load
 - Un constructeur par copie d'image
 - La redéfinition de l'opérateur '=' pour la classe
 - Le destructeur de base de la classe (important car il y a un objet alloué dynamiquement dans cette dernière)
 - Les méthodes load et write des images définies selon le sujet
 - le getter / setter de la donnée de la case i j de l'image
 - les getters des arguments de taille de l'image
 */

#include <iostream>
#include <fstream>
#ifndef image_H
#define image_H

class Image {
     
     public :
        Image(const std::string& filename);
        Image(const Image& image);
        Image& operator=(const Image& image);
        ~Image();
        void load(const std::string& filename);
        void write(const std::string& filename);
        unsigned char get(int i, int j) const;
        void set(int i, int j, unsigned char valeur);
        size_t get_w() const;
        size_t get_h() const;

    private :
        size_t w;
        size_t h;
        unsigned char* data;
}
;



#endif