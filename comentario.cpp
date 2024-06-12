#include <iostream>
#include "comentario.h"

using namespace std;

Comentarios::Comentarios(int id, string nom,int e, int num, string tex, Usuario usuario) : Usuario(id, nom, e) {
    numero = num;
    texto = tex;
    usuario = usuario;
}

Comentarios::~Comentarios(){
}

void Comentarios::setComentario(string tex) {
    texto = tex;
}

string Comentarios::getComentario() {
    return texto;
}

void Comentarios::setNumero(int num) {
    numero = num;
}

int Comentarios::getNumero() {
    return numero;
}
