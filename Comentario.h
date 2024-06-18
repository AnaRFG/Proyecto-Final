#ifndef Comentarios_h
#define Comentarios_h

#include <iostream>
#include "Usuario.h"

class Comentarios {
private:
    int numero;
    string texto;
    Usuario usuario;

public:
    Comentarios(int num, string tex, Usuario usuario);
    Comentarios();
    ~Comentarios();

    void setComentario(string tex);
    string getComentario() const;

    void setNumero(int num);
    int getNumero() const;

    void setUsuario(Usuario usuario);
    Usuario getUsuario() const;
};

#endif
