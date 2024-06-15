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
    int d, m, a, id, e, num;
    int ingreso1, ingreso2, com1;
    Persona persona;
    Autor autor;
    Usuario usuario;
    Noticia noticia[5];
    Comentarios comentario;

    do {
        cout << "\n\nUsted ha ingresado al sistema de noticias NEWS\n\n";
        cout << "Por favor, elija su modo de acceso ingresando el número correspondiente:\n\n";
        cout << "1. Autor\n\n";
        cout << "2. Usuario - Lector\n\n";
        cout << "3. Deseo salir del programa. \n\n";
        cin >> ingreso1;
        cin.ignore(); // Ignorar nueva línea pendiente después de cin

        switch (ingreso1) {
            case 1:
                cout << "Ingrese el nombre del autor: " << endl;
                getline(cin, nom);
                cout << "Ingrese el DNI del autor: " << endl;
                cin >> id;
                cin.ignore();
                cout << "Ingrese el medio al cual pertenece: " << endl;
                getline(cin, med);
                autor.setNombre(nom);
                autor.setDNI(id);
                autor.setMedio(med);
                for (int i = 0; i < 5; ++i) {
                    cout << "Ingrese el titulo de la noticia " << i << ": " << endl;
                    getline(cin, tit);
                    cout << "Ingrese la descripcion de la noticia : " << endl;
                    getline(cin, desc);
                    cout << "Ingrese el dia de la noticia : " << endl;
                    cin >> d;
                    cout << "Ingrese el mes de la noticia : " << endl;
                    cin >> m;
                    cout << "Ingrese el año de la noticia : " << endl;
                    cin >> a;
                    cin.ignore(); // Ignorar nueva línea pendiente después de cin
                    noticia[i].setTitulo(tit);
                    noticia[i].setDescripcion(desc);
                    noticia[i].setDia(d);
                    noticia[i].setMes(m);
                    noticia[i].setAño(a);
                }
                break;

            case 2:
                cout << "Ingrese el nombre del usuario: " << endl;
                getline(cin, nom);
                cout << "Ingrese el DNI del usuario: " << endl;
                cin >> id;
                cout << "Ingrese la edad del usuario: " << endl;
                cin >> e;
                cin.ignore();
                usuario.setNombre(nom);
                usuario.setDNI(id);
                usuario.setEdad(e);
                cout << "Por favor, elija la accion que desea realizar ingresando el número correspondiente:\n\n";
                cout << "1. Lectura\n\n";
                cout << "2. Comentario\n\n";
                cin >> ingreso2;
                cin.ignore();

                switch (ingreso2) {
                    case 1:
                        for (int i = 0; i < 5; ++i) {
                            cout << "Titulo de la noticia " << i << ": " << endl;
                            cout << noticia[i].getTitulo() << endl;
                            cout << "Descripcion : " << endl;
                            cout << noticia[i].getDescripcion() << endl;
                            cout << "Dia : " << endl;
                            cout << noticia[i].getDia() << endl;
                            cout << "Mes : " << endl;
                            cout << noticia[i].getMes() << endl;
                            cout << "Año : " << endl;
                            cout << noticia[i].getAño() << endl;
                        }
                        break;
                    case 2:
                        for (int i = 0; i < 5; ++i) {
                            cout << "Titulo de la noticia " << i << ": " << endl;
                            cout << noticia[i].getTitulo() << endl;
                        }
                        cout << "Ingrese la cantidad de comentarios que desea realizar: " << endl;
                        cin >> com1;
                        cin.ignore();
                        for (int i = 0; i < com1; ++i) {
                            cout << "Ingrese sobre que noticia desea realizar un comentario: " << endl;
                            cin >> num;
                            cin.ignore();
                            cout << "Ingrese el comentario que desea realizar: " << endl;
                            getline(cin, tex);
                            comentario.setNumero(num);
                            comentario.setComentario(tex);
                        }
                        break;
                }
                break;

            case 3:
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opción no válida, por favor intente nuevamente." << endl;
        }
    } while (ingreso1 != 3);

    return 0;
}
