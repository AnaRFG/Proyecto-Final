#include <iostream>
#include "Autor.h"
#include "Persona.h"
using namespace std;

//Constructor de la clase Autor que hereda de Persona
Autor::Autor(int id, string nom, string med) : Persona(id, nom) {
    medio = med;
}

Autor::~Autor(){

}

void Autor::setMedio(string med) {
    medio = med;
}

string Autor::getMedio() {
    return medio;
}


/*void Autor::getAutor() {
    cout << "Datos del autor:" << endl;
    cout << "DNI: " << getDNI()<< endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Medio: " << getMedio() << endl;
}
 */


