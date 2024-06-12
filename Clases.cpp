#include <iostream>
#include "Clases.h"

using namespace std;

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