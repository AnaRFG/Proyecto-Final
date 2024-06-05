#include <iostream>
#include "Clases.h"

using namespace std;

//Constructor de la clase Persona
Persona::Persona(int id, string nom) {
    dni = id;
    nombre = nom;
}

void Persona::setDNI(int id) {
    dni = id;
}

int Persona::getDNI() {
    return dni;
}

void Persona::setNombre(string nom) {
    nombre = nom;
}

string Persona::getNombre() {
    return nombre;
}


//Constructor de la clase Autor que hereda de Persona
Autor::Autor(int id, string nom, string med) : Persona(id, nom) {
    medio = med;
}

void Autor::setMedio(string med) {
    medio = med;
}

string Autor::getMedio() {
    return medio;
}

string Autor::getAutor() {
    getMedio();
    getNombre();
}

void Autor::mostrarDatos() {
    cout << "Datos del autor:" << endl;
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Medio: " << medio << endl;
}


//Constructor de la clase Noticia
Noticia::Noticia(string tit, string desc,Autor autor, int a, int m, int d) {
    titulo = tit;
    descripcion = desc;
    año = a;
    mes = m;
    dia = d;
}
//Destructor
Noticia::~Noticia(){

}

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

void Noticia::mostrarNoticia(){
        cout << "Noticia:" << endl;
        cout << "Título: " << titulo << endl;
        cout << "Detalle: " << descripcion << endl;
        cout << "Fecha: " << dia << "/" << mes << "/" << año << endl;
        cout << "Autor: " << autor.getNombre() << " (" << autor.getMedio() << ")" << endl;
}


//Constructor de la clase Usuario que hereda de Persona
Usuario::Usuario(int id, string nom, int e) : Persona(id, nom) {
    edad = e;
}

void Usuario::setEdad(int e) {
    edad = e;
}

int Usuario::getEdad() {
    return edad;
}

void Usuario::mostrarUsuario(){
    cout << "Datos del autor:" << endl;
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

//Constrcutor de la clase Comentarios que hereda de Usuario
Comentarios::Comentarios(int id, string nom,int e, int num, string tex, Usuario usuario) : Usuario(id, nom, e) {
    numero = num;
    texto = tex;
    usuario = usuario;
}