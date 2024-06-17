#include <iostream>
#include "Persona.h"
#include "Autor.h"
#include "Comentario.h"
#include "Usuario.h"
#include "Noticia.h"
using namespace std;

class archivero : public Noticia, public Comentario {
    private:
    Noticia tit;
    Noticia desc;
    Noticia a;
    Noticia m;
    Noticia d;
    Autor autor;
    Comentarios comentarios;

    public:
    archivero();
    archivero(Noticia tit, Noticia desc, Noticia a, Noticia m, Noticia d, Autor autor, Comentarios comentarios);
    void leerarchivo();
    void añadirarchivo();
};

