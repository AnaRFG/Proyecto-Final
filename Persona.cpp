//
// Created by araya on 5/6/2024.
//

#include "Persona.h"
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
