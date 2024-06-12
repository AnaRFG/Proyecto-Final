#include <iostream>
#include "Usuario.h"

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
    cout << "Datos del usuario:" << endl;
    cout << "DNI: " << getDNI() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
}