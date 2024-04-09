/* 
Auteur : Le Floch Mael
Objet : Définition des éléments de la classe image
Objectif : Voir le fichier hpp corespondant
 */


#include "image.hpp"
#include <iostream>
#include <fstream>
#include <string>

void Image::load(const std::string& filename) {
    std::ifstream ifs(filename, std::ios::binary);
    if (!ifs.good()) {
        throw std::runtime_error("Unable to open file for reading");
    }
    std::string magicNumber;
    ifs >> magicNumber;

    ifs >> w >> h;
    if (w <= 0 || h <= 0) {
        throw std::runtime_error("Invalid image dimensions");
    }
 // Allocation dynamique de data
    data = new unsigned char[w * h];

    int maxPixelValue;
    ifs >> maxPixelValue;

    ifs.read(reinterpret_cast<char*>(data), w * h);

    ifs.close();
}


Image::Image(const std::string& filename){
    load(filename);
}

Image::Image(const Image& image){
        w = image.w;
        h = image.h;
        data = new unsigned char[w * h];
        std::copy(image.data, image.data + (w * h), data);
}


Image& Image::operator=(const Image& image) {
    if (this != &image) {
        delete[] data;
        w = image.w;
        h = image.h;
        data = new unsigned char[w * h];
        std::copy(image.data, image.data + (w * h), data);
    }
    return *this;
}

Image::~Image() {
 delete[] data;
}

void Image::write(const std::string& filename) {

    std::ofstream ofs(filename, std::ios::binary);
    if (!ofs.good()) {
        throw std::runtime_error("Unable to open file for writing");
    }


    ofs << "P5" << std::endl;

    ofs << w << " " << h << std::endl;
    ofs << "255" << std::endl; 


    ofs.write(reinterpret_cast<char*>(data), w * h);

    ofs.close();
}


unsigned char Image::get(int i, int j) const{
    return data[i*w+j];
}
void Image::set(int i, int j, unsigned char valeur){
    data[i*w+j]=valeur;
}

size_t Image::get_w() const{
    return w;
}

size_t Image::get_h() const{
    return h;
}