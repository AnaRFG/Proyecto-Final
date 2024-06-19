#include "Archivero.h"
#include <iostream>
#include <fstream>
#include <stdexcept>

using namespace std;

Archivo::Archivo() {
    try {
        archivoSalida.open("noticias.txt", ios::app);
        archivoEntrada.open("noticias.txt");

        if (!archivoSalida.is_open() || !archivoEntrada.is_open()) {
            throw runtime_error("No se pudo abrir el archivo 'noticias.txt'");
        }
    } catch (const exception &e) {
        cerr << "Error al abrir el archivo: " << e.what() << endl;
    }
}

Archivo::~Archivo() {
    cerrarArchivo();
}

void Archivo::grabarNoticias(Noticia noticias[], int numNoticias) {
    try {
        for (int i = 0; i < numNoticias; ++i) {
            archivoSalida << "Titulo: " << noticias[i].getTitulo() << "\n";
            archivoSalida << "Descripcion: " << noticias[i].getDescripcion() << "\n";
            archivoSalida << "Fecha: " << noticias[i].getDia() << "/" << noticias[i].getMes() << "/"
                          << noticias[i].getAño() << "\n";
            // Guardar los comentarios
            archivoSalida << "Comentario: " << noticias[i].getComentarios().getComentario() << "\n";
            archivoSalida << "Usuario: " << noticias[i].getComentarios().getUsuario().getNombre() << "\n";
            archivoSalida << "\n";
        }
        archivoSalida.flush();
    } catch (const exception &e) {
        cerr << "Error al escribir en el archivo: " << e.what() << endl;
    }
}

void Archivo::leerNoticias() {
    try {
        string linea;
        while (getline(archivoEntrada, linea)) {
            if (linea.find("Titulo: ") != string::npos) {
                string titulo = linea.substr(8);
                getline(archivoEntrada, linea);
                string descripcion = linea.substr(13);
                getline(archivoEntrada, linea);
                int dia, mes, año;
                sscanf(linea.c_str(), "Fecha: %d/%d/%d", &dia, &mes, &año);
                getline(archivoEntrada, linea);
                string comentario = linea.substr(12);
                getline(archivoEntrada, linea);
                string nombreUsuario = linea.substr(9);

                // Crear y mostrar la noticia con comentarios
                Usuario usuario(0, nombreUsuario, 0);
                Comentarios comentarios(0, comentario, usuario);
                Noticia noticia(titulo, descripcion, año, mes, dia, Autor(), comentarios);

                cout << "Titulo: " << noticia.getTitulo() << "\n";
                cout << "Descripcion: " << noticia.getDescripcion() << "\n";
                cout << "Fecha: " << noticia.getDia() << "/" << noticia.getMes() << "/" << noticia.getAño() << "\n";
                cout << "Comentario: " << noticia.getComentarios().getComentario() << "\n";
                cout << "Usuario: " << noticia.getComentarios().getUsuario().getNombre() << "\n\n";
            }
        }
        archivoEntrada.clear(); // Limpia errores al finalizar la lectura
    } catch (const exception &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;
    }
}

void Archivo::eliminarNoticias() {
    cerrarArchivo();
    ofstream file("noticias.txt", ios::out | ios::trunc);
    if (!file.is_open()) {
        cerr << "No se pudo abrir el archivo para eliminar su contenido." << endl;
        return;
    }
    file.close();
}

void Archivo::cerrarArchivo() {
    if (archivoSalida.is_open()) {
        archivoSalida.close();
    }
    if (archivoEntrada.is_open()) {
        archivoEntrada.close();
    }
}

void Archivo::listarNoticiasPorAño(int año) {
    try {
        string linea;
        while (getline(archivoEntrada, linea)) {
            if (linea.find("Titulo: ") != string::npos) {
                string titulo = linea.substr(8);
                getline(archivoEntrada, linea);
                string descripcion = linea.substr(13);
                getline(archivoEntrada, linea);
                int dia, mes, ano;
                sscanf(linea.c_str(), "Fecha: %d/%d/%d", &dia, &mes, &ano);
                if (ano == año) {
                    getline(archivoEntrada, linea);
                    string nombreAutor = linea.substr(7);
                    getline(archivoEntrada, linea);
                    string comentario = linea.substr(12);
                    getline(archivoEntrada, linea);
                    string nombreUsuario = linea.substr(9);

                    // Crear y mostrar la noticia con comentarios
                    Usuario usuario(0, nombreUsuario, 0);
                    Comentarios comentarios(0, comentario, usuario);
                    Autor autor(0, nombreAutor, "");
                    Noticia noticia(titulo, descripcion, ano, mes, dia, autor, comentarios);

                    cout << "Titulo: " << noticia.getTitulo() << "\n";
                    cout << "Descripcion: " << noticia.getDescripcion() << "\n";
                    cout << "Fecha: " << noticia.getDia() << "/" << noticia.getMes() << "/" << noticia.getAño() << "\n";
                    cout << "Autor: " << noticia.getAutor().getNombre() << "\n";
                    cout << "Comentario: " << noticia.getComentarios().getComentario() << "\n";
                    cout << "Usuario: " << noticia.getComentarios().getUsuario().getNombre() << "\n\n";
                }
            }
        }
        archivoEntrada.clear();
    } catch (const exception &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;
    }
}

void Archivo::listarNoticiasUltimoMes() {
    try {
        int mesActual = 6;
        int añoActual = 2024;

        string linea;
        while (getline(archivoEntrada, linea)) {
            if (linea.find("Titulo: ") != string::npos) {
                string titulo = linea.substr(8);
                getline(archivoEntrada, linea);
                string descripcion = linea.substr(13);
                getline(archivoEntrada, linea);
                int dia, mes, ano;
                sscanf(linea.c_str(), "Fecha: %d/%d/%d", &dia, &mes, &ano);
                if (mes == mesActual && ano == añoActual) {
                    getline(archivoEntrada, linea);
                    string nombreAutor = linea.substr(7);
                    getline(archivoEntrada, linea);
                    string comentario = linea.substr(12);
                    getline(archivoEntrada, linea);
                    string nombreUsuario = linea.substr(9);

                    // Crear y mostrar la noticia con comentarios
                    Usuario usuario(0, nombreUsuario, 0);
                    Comentarios comentarios(0, comentario, usuario);
                    Autor autor(0, nombreAutor, "");
                    Noticia noticia(titulo, descripcion, ano, mes, dia, autor, comentarios);

                    cout << "Titulo: " << noticia.getTitulo() << "\n";
                    cout << "Descripcion: " << noticia.getDescripcion() << "\n";
                    cout << "Fecha: " << noticia.getDia() << "/" << noticia.getMes() << "/" << noticia.getAño() << "\n";
                    cout << "Autor: " << noticia.getAutor().getNombre() << "\n";
                    cout << "Comentario: " << noticia.getComentarios().getComentario() << "\n";
                    cout << "Usuario: " << noticia.getComentarios().getUsuario().getNombre() << "\n\n";
                }
            }
        }
        archivoEntrada.clear();
    } catch (const exception &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;
    }
}

void Archivo::listarNoticiasPorAutor(const string& nombreAutor) {
    try {
        string linea;
        while (getline(archivoEntrada, linea)) {
            if (linea.find("Titulo: ") != string::npos) {
                string titulo = linea.substr(8);
                getline(archivoEntrada, linea);
                string descripcion = linea.substr(13);
                getline(archivoEntrada, linea);
                int dia, mes, ano;
                sscanf(linea.c_str(), "Fecha: %d/%d/%d", &dia, &mes, &ano);
                getline(archivoEntrada, linea);
                string nombreAutorArchivo = linea.substr(7);
                getline(archivoEntrada, linea);
                string comentario = linea.substr(12);
                getline(archivoEntrada, linea);
                string nombreUsuario = linea.substr(9);

                if (nombreAutorArchivo == nombreAutor) {
                    // Crear y mostrar la noticia con comentarios
                    Usuario usuario(0, nombreUsuario, 0);
                    Comentarios comentarios(0, comentario, usuario);
                    Autor autor(0, nombreAutorArchivo, "");
                    Noticia noticia(titulo, descripcion, ano, mes, dia, autor, comentarios);

                    cout << "Titulo: " << noticia.getTitulo();
                    cout << "Descripcion: " << noticia.getDescripcion() << "\n";
                    cout << "Fecha: " << noticia.getDia() << "/" << noticia.getMes() << "/" << noticia.getAño() << "\n";
                    cout << "Autor: " << noticia.getAutor().getNombre() << "\n";
                    cout << "Comentario: " << noticia.getComentarios().getComentario() << "\n";
                    cout << "Usuario: " << noticia.getComentarios().getUsuario().getNombre() << "\n\n";
                }
            }
        }
        archivoEntrada.clear();
    } catch (const exception &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;
    }
}


