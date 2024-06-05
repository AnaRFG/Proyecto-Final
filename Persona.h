#include <iostream>

using namespace std;

class Persona {
protected:
    int dni;
    string nombre;
public:
    Persona(int id, string nom);

    void setDNI(int id);

    int getDNI();

    void setNombre(string nom);

    string getNombre();
};