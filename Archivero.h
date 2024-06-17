#ifndef Archivero_H
#define Archivero_H

#include <fstream>
#include <string>
#include "Noticia.h"
#include "Comentario.h"

using namespace std;

class Archivos {
public:
    void guardarNoticia(Noticia noticia);
    void guardarComentario(Comentarios comentario);
    void cargarNoticia(Noticia); //listaClientes[], int &numClientes);
    void cargarComentario(Comentarios listaTransacciones[], int &numTransacciones);
};


#endif

