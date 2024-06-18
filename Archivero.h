#ifndef ARCHIVERO_H
#define ARCHIVERO_H

#include "Noticia.h"
#include <fstream>
#include <iostream>

class Archivo {
private:
    std::ofstream archivoSalida;
    std::ifstream archivoEntrada;

public:
    Archivo();
    ~Archivo();

    void grabarNoticias(Noticia noticias[], int numNoticias);
    void leerNoticias();
    void eliminarNoticias();
};

#endif

