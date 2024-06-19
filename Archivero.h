
#ifndef Archivero_H
#define Archivero_H

#include <fstream>
#include <string>
#include "Noticia.h"
#include "Comentarios.h"

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
    void cerrarArchivo();
};

#endif



