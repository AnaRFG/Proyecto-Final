#include <iostream>
#include <stdexcept>
#include "Archivero.h"
#include "Autor.h"
#include "Noticia.h"
#include "Usuario.h"
#include "Comentarios.h"
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
    Archivo archivo;

    do {
        try {
            cout << "\n\nUsted ha ingresado al sistema de noticias NEWS\n\n";
            cout << "Por favor, elija su modo de acceso ingresando el número correspondiente:\n\n";
            cout << "1. Autor\n\n";
            cout << "2. Usuario - Lector\n\n";
            cout << "3. Eliminar noticias existentes\n\n";
            cout << "4. Deseo salir del programa. \n\n";
            cin >> ingreso1;
            cin.ignore();

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
                        if (d < 1 || d > 31) {
                            throw invalid_argument("Día inválido. Debe estar entre 1 y 31.");
                        }
                        cout << "Ingrese el mes de la noticia : " << endl;
                        cin >> m;
                        if (m < 1 || m > 12) {
                            throw invalid_argument("Mes inválido. Debe estar entre 1 y 12.");
                        }
                        cout << "Ingrese el anio de la noticia : " << endl;
                        cin >> a;
                        if (a < 0 || a > 2024) {
                            throw invalid_argument("Año inválido. Debe estar entre 1900 y 2100.");
                        }
                        cin.ignore();
                        noticia[i].setTitulo(tit);
                        noticia[i].setDescripcion(desc);
                        noticia[i].setDia(d);
                        noticia[i].setMes(m);
                        noticia[i].setAño(a);
                        noticia[i].setAutor(autor);
                    }
                    archivo.grabarNoticias(noticia, 5);
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
                    cout << "Por favor, elija la acción que desea realizar ingresando el numero correspondiente:\n\n";
                    cout << "1. Lectura\n\n";
                    cout << "2. Comentario\n\n";
                    cout << "3. Listar noticias publicadas en el anio\n\n";
                    cout << "4. Listar noticias publicadas el ultimo mes\n\n";
                    cout << "5. Listar noticias por autor\n\n";
                    cin >> ingreso2;
                    cin.ignore();

                    switch (ingreso2) {
                        case 1:
                            archivo.leerNoticias();
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
                                if (num < 0 || num >= 5) {
                                    throw out_of_range("Indice de noticia fuera de rango.");
                                }
                                cout << "Ingrese el comentario que desea realizar: " << endl;
                                getline(cin, tex);
                                comentario.setNumero(num);
                                comentario.setComentario(tex);
                                comentario.setUsuario(usuario);
                                noticia[num].setComentarios(comentario);
                            }
                            archivo.grabarNoticias(noticia, 5);
                            break;
                        case 3:
                            cout << "Ingrese el año de las noticias que desea listar: " << endl;
                            cin >> a;
                            cin.ignore();
                            archivo.listarNoticiasPorAño(a);
                            break;
                        case 4:
                            archivo.listarNoticiasUltimoMes();
                            break;
                        case 5:
                            cout << "Ingrese el nombre del autor cuyas noticias desea listar: " << endl;
                            getline(cin, nom);
                            archivo.listarNoticiasPorAutor(nom);
                            break;
                        default:
                            cout << "Opción no valida, por favor intente nuevamente." << endl;
                            break;
                    }
                    break;

                case 3:
                    cout << "Eliminando noticias ..." << endl;
                    archivo.eliminarNoticias();
                    cout << "Noticias eliminadas." << endl;
                    break;

                case 4:
                    cout << "Cerrando el programa. ¡Adios!" << endl;
                    break;

                default:
                    cout << "Opcion no valida, por favor intente nuevamente." << endl;
                    break;
            }
        } catch (const exception &e) {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
        }
    } while (ingreso1 != 4);

    return 0;
}
