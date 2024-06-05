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
    void setDNI(int id);
    int getDNI();
    void setNombre(string nom);
    string getNombre();
};


class Autor : public Persona {
private:
    string medio;
public:
    Autor(int id, string nom, string med);
    Autor();
    ~Autor();
    string getMedio();
    void setMedio(string med);
    string getAutor();
    void mostrarDatos();
};


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


class Comentarios : public Usuario {
private:
    int numero;
    string texto;
public:
    Comentarios(int id, string nom, int e, int num, string tex, Usuario usuario);
};