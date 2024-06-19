#include "Comentarios.h"

Comentarios::Comentarios(int num, string tex, Usuario usuario) : numero(num), texto(tex), usuario(usuario) {}

Comentarios::Comentarios(){

}

Comentarios::~Comentarios() {}

void Comentarios::setComentario(string tex) {
    texto = tex;
}

string Comentarios::getComentario() const {
    return texto;
}

void Comentarios::setNumero(int num) {
    numero = num;
}

int Comentarios::getNumero() const {
    return numero;
}

void Comentarios::setUsuario(Usuario usr) {
    usuario = usr;
}

Usuario Comentarios::getUsuario() const {
    return usuario;
}
