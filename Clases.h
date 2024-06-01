#include <iostream>

using namespace std;

// Definicion de clases

//Clase base de Autor y Usuario
class Persona {
protected:
    int dni;
    string nombre;
public:
    Persona(int id, string nom);
};

//
class Autor : Persona {
private:
    string medio;
    int noticias;
    Noticia* noticias[10];
public:
    Autor(int id, string nom, string med);
    Autor();
    ~Autor();
    string getDNI();
    void setDNI(string id);
    string getNombre();
    void setNombre(string nom);
    string getMedio();
    void setMedio(string med);

    // Método para agregar una noticia al autor
    void agregarNoticia(Noticia* noticia);
};


class Noticia {
private:
    string titulo;
    string descripcion;
    Autor* autor;
    int año;
    int mes;
    int dia;
public:
    Noticia(string tit, string desc, Autor* autor, int a, int m, int d);
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
    void setAutor(Autor* autor);
    Autor* getAutor();
};


class Usuario : Persona {
private:
    int edad;
public:
    Usuario(int dni, string name, int edad);
};


class Comentarios : public Usuario {
private:
    int numero;
    string texto;
public:
    Comentarios(int num, string tex, Usuario usuario,int id, string nom, int ed );
};