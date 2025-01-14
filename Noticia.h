#ifndef Noticia_h
#define Noticia_h

#include <iostream>
#include "Persona.h"
#include "Autor.h"
#include "Comentarios.h"
#include "Usuario.h"

using namespace std;

class Noticia {
private:
    string titulo;
    string descripcion;
    int año;
    int mes;
    int dia;
    Autor autor;
    Comentarios comentarios;
    bool tieneComentario;
public:
    Noticia();

    Noticia(string tit, string desc, int a, int m, int d, Autor autor, Comentarios comentarios);

    ~Noticia();

    void setTitulo(string tit);

    string getTitulo();

    void setDescripcion(string desc);

    string getDescripcion();

    void setDia(int d);

    int getDia();

    void setAño(int a);

    int getAño();

    void setMes(int m);

    int getMes();

    void setAutor(Autor aut);

    Autor getAutor() const;

    void setComentarios(Comentarios com);

    Comentarios getComentarios() const;

};

#endif