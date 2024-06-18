#include "Archivero.h"
#include <iostream>
#include <fstream>

Archivo::Archivo() {
    archivoSalida.open("noticias.txt", std::ios::app); // Abre el archivo para añadir al final
    archivoEntrada.open("noticias.txt"); // Abre el archivo para lectura
}

Archivo::~Archivo() {
    archivoSalida.close();
    archivoEntrada.close();
}

void Archivo::grabarNoticias(Noticia noticias[], int numNoticias) {
    for (int i = 0; i < numNoticias; ++i) {
        archivoSalida << "Titulo: " << noticias[i].getTitulo() << "\n";
        archivoSalida << "Descripcion: " << noticias[i].getDescripcion() << "\n";
        archivoSalida << "Fecha: " << noticias[i].getDia() << "/" << noticias[i].getMes() << "/" << noticias[i].getAño() << "\n";
        // Guardar los comentarios
        archivoSalida << "Comentario: " << noticias[i].getComentarios().getComentario() << "\n";
        archivoSalida << "Usuario: " << noticias[i].getComentarios().getUsuario().getNombre() << "\n";
        archivoSalida << "\n";
    }
    archivoSalida.flush(); // Forzar la escritura inmediata al archivo
}

void Archivo::leerNoticias() {
    std::string linea;
    while (getline(archivoEntrada, linea)) {
        if (linea.find("Titulo: ") != std::string::npos) {
            std::string titulo = linea.substr(8); // Obtener el título (después de "Titulo: ")
            getline(archivoEntrada, linea); // Leer siguiente línea (Descripción)
            std::string descripcion = linea.substr(13); // Obtener la descripción (después de "Descripcion: ")
            getline(archivoEntrada, linea); // Leer siguiente línea (Fecha)
            int dia, mes, año;
            sscanf(linea.c_str(), "Fecha: %d/%d/%d", &dia, &mes, &año); // Leer día, mes y año
            getline(archivoEntrada, linea); // Leer siguiente línea (Comentario)
            std::string comentario = linea.substr(12); // Obtener el comentario (después de "Comentario: ")
            getline(archivoEntrada, linea); // Leer siguiente línea (Usuario)
            std::string nombreUsuario = linea.substr(9); // Obtener el nombre del usuario (después de "Usuario: ")

            // Crear y mostrar la noticia con comentarios
            Usuario usuario(0, nombreUsuario, 0); // Crear un usuario (necesitas ajustarlo según tus definiciones)
            Comentarios comentarios(0, comentario, usuario);
            Noticia noticia(titulo, descripcion, año, mes, dia,Autor(), Comentarios());

            std::cout << "Titulo: " << noticia.getTitulo() << "\n";
            std::cout << "Descripcion: " << noticia.getDescripcion() << "\n";
            std::cout << "Fecha: " << noticia.getDia() << "/" << noticia.getMes() << "/" << noticia.getAño() << "\n";
            std::cout << "Comentario: " << noticia.getComentarios().getComentario() << "\n";
            std::cout << "Usuario: " << noticia.getComentarios().getUsuario().getNombre() << "\n\n";
        }
    }
    archivoEntrada.clear(); // Limpiar errores de archivo al finalizar la lectura
    archivoEntrada.seekg(0, std::ios::beg); // Volver al principio del archivo para futuras operaciones
}

