#include <iostream>
#include "Persona.h"
#include "usuario.h"

using namespace std;

class Comentarios : public Usuario {
private:
    int numero;
    string texto;
public:
    Comentarios(int id, string nom, int e, int num, string tex, Usuario usuario);
    Comentarios();
    ~Comentarios();
    void setComentario(string tex);
    string getComentario();
    void setNumero(int num);
    int getNumero();

};
