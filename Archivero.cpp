#include "Archivero.h"
#include <iostream>
#include <fstream>
#include <stdexcept>

using namespace std;

Archivo::Archivo() {
    try {
        archivoSalida.open("noticias.txt", ios::app); // Abre el archivo para añadir al final
        archivoEntrada.open("noticias.txt"); // Abre el archivo para lectura

        if (!archivoSalida.is_open() || !archivoEntrada.is_open()) {
            throw runtime_error("No se pudo abrir el archivo 'noticias.txt'");
        }
    } catch (const exception &e) {
        cerr << "Error al abrir el archivo: " << e.what() << endl;
    }
}

Archivo::~Archivo() {
    archivoSalida.close();
    archivoEntrada.close();
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
        archivoSalida.flush(); // Forzar la escritura inmediata al archivo
    } catch (const exception &e) {
        cerr << "Error al escribir en el archivo: " << e.what() << endl;
    }
}

void Archivo::leerNoticias() {
    try {
        string linea;
        while (getline(archivoEntrada, linea)) {
            if (linea.find("Titulo: ") != string::npos) {
                string titulo = linea.substr(8); // Obtener el título (después de "Titulo: ")
                getline(archivoEntrada, linea); // Leer siguiente línea (Descripción)
                string descripcion = linea.substr(13); // Obtener la descripción (después de "Descripcion: ")
                getline(archivoEntrada, linea); // Leer siguiente línea (Fecha)
                int dia, mes, año;
                sscanf(linea.c_str(), "Fecha: %d/%d/%d", &dia, &mes, &año); // Leer día, mes y año
                getline(archivoEntrada, linea); // Leer siguiente línea (Comentario)
                string comentario = linea.substr(12); // Obtener el comentario (después de "Comentario: ")
                getline(archivoEntrada, linea); // Leer siguiente línea (Usuario)
                string nombreUsuario = linea.substr(9); // Obtener el nombre del usuario (después de "Usuario: ")

                // Crear y mostrar la noticia con comentarios
                Usuario usuario(0, nombreUsuario, 0); // Crear un usuario (necesitas ajustarlo según tus definiciones)
                Comentarios comentarios(0, comentario, usuario);
                Noticia noticia(titulo, descripcion, año, mes, dia, Autor(), comentarios);

                cout << "Titulo: " << noticia.getTitulo() << "\n";
                cout << "Descripcion: " << noticia.getDescripcion() << "\n";
                cout << "Fecha: " << noticia.getDia() << "/" << noticia.getMes() << "/" << noticia.getAño() << "\n";
                cout << "Comentario: " << noticia.getComentarios().getComentario() << "\n";
                cout << "Usuario: " << noticia.getComentarios().getUsuario().getNombre() << "\n\n";
            }
        }
        archivoEntrada.clear(); // Limpiar errores de archivo al finalizar la lectura
        archivoEntrada.seekg(0, ios::beg); // Volver al principio del archivo para futuras operaciones
    } catch (const exception &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;

    }
}
