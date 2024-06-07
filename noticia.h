#include <iostream>
#include "Persona.h"
#include "autor.h"
#include "comentario.h"
#include "usuario.h"
using namespace std;

class Noticia {
private:
    string titulo;
    string descripcion;
    int año;
    int mes;
    int dia;
    Autor autor;
public:
    Noticia(string tit, string desc,Autor autor, int a, int m, int d);
    ~Noticia();
    void setTitulo(string tit);
    string getTitulo();
    void setDescripcion(string desc);
    string getDescripcion();
    void setDia(int d);
    int getDia();
    void setAño(int a);
    int getAño();
    void setMes(int m);
    int getMes();
    void mostrarNoticia();
};
