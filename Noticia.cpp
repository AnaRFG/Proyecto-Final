#include <iostream>
#include "Noticia.h"
#include "Comentario.h"
using namespace std;

//Constructor de la clase Noticia
Noticia::Noticia(string tit,string desc, int a, int m, int d, Autor autor, Comentarios comentarios) {
    titulo = tit;
    descripcion = desc;
    año = a;
    mes = m;
    dia = d;
}

Noticia::Noticia() {

}

//Destructor
Noticia::~Noticia(){}

void Noticia::setTitulo(string tit) {
    titulo = tit;
}

string Noticia::getTitulo() {
    return titulo;
}

void Noticia::setDescripcion(string desc) {
    descripcion = desc;
}

string Noticia::getDescripcion() {
    return descripcion;
}

void Noticia::setDia(int d) {
    dia = d;
}

int Noticia::getDia() {
    return dia;
}

void Noticia::setMes(int m) {
    mes = m;
}

int Noticia::getMes() {
    return mes;
}

void Noticia::setAño(int a) {
    año = a;
}

int Noticia::getAño() {
    return año;
}

void Noticia::setAutor(Autor autor) {
    autor = autor;
}

Autor Noticia::getAutor() const {
    return autor;
}

void Noticia::setComentarios(Comentarios comentarios) {
    comentarios = comentarios;
}

Comentarios Noticia::getComentarios() const {
    return comentarios;
}
