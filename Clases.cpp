#include <iostream>
#include "Clases.h"

using namespace std;

//Constructor de la clase Persona
Persona::Persona(int id, string nom) {
    dni = id;
    nombre = nom;
}

//Constructor de la clase Autor que hereda de Persona
Autor::Autor(int id, string nom, string med) : Persona(id, nom) {
    medio = med;
}

//Constructor de la clase Noticia
Noticia::Noticia(string tit, string desc, Autor* autor, int a, int m, int d) {
    titulo = tit;
    descripcion = desc;
    autor = autor;
    año = a;
    mes = m;
    dia = d;
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
void Noticia::setAutor(Autor* autor) {
    autor = autor;
}
Autor* Noticia::getAutor() {
    return autor;
}







//Constructor de la clase Usuario que hereda de Persona
Usuario::Usuario(int id, string nom, int ed) : Persona(id, nom) {
    dni = id;
    nombre = nom;
    edad = ed;
}

//Constrcutor de la clase Comentarios que hereda de Usuario
Comentarios::Comentarios(int num, string tex, Usuario usuario, int id, string nom, int ed) : Usuario(id, nom, ed) {
    numero = num;
    texto = tex;
    usuario = usuario;
}