#include <iostream>
#include "Archivero.h"
#include "Autor.h"
#include "Noticia.h"
#include "Usuario.h"
#include "Comentario.h"
#include "Persona.h"

using namespace std;

int main() {
    string tit, desc, med, nom, tex;
    int d,m,a,id,e,num,ingreso;
    Persona persona;
    Autor autor;
    Usuario usuario;
    Noticia noticia [20];
    Comentarios comentario;

    do {
        cout << "\n\nUsted ha ingresado al sistema de noticias NEWS\n\n";
        cout << "Por favor, elija su modo de acceso ingresando el número correspondiente:\n\n";
        cout << "1. Autor\n\n";
        cout << "2. Usuario - Lector\n\n";
        cout << "3. Deseo salir del programa. \n\n";
        cin >> ingreso;
        switch (ingreso) {
            case 1:
                cout << "hola";
                //realizar metodos de autor

                break;
            case 2:
                cout << "chau";
                //realizar metodos de usuario
                break;
            case 3:
                exit(-1);
        }
        if (ingreso != 1 || ingreso != 2) {
            cout << "\nLa opcion ingresada no es valida. Intente nuevamente.\n\n";
        }
    } while (ingreso != 1 || ingreso != 2);

    return 0;
}