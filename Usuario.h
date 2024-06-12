#include <iostream>
#include "Persona.h"

using namespace std;

class Usuario : public Persona {
private:
    int edad;
public:
    Usuario(int id, string nom, int e);
    int getEdad();
    void setEdad(int e);
    string getAutor();
    void mostrarUsuario();
};
