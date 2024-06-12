#include <iostream>
#include "Persona.h"
using namespace std;


class Autor : public Persona {
private:
    string medio;
public:
    Autor(int id, string nom, string med);
    Autor();
    ~Autor();
    string getMedio();
    void setMedio(string med);
    //void getAutor();
};

