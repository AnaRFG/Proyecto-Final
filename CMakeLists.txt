cmake_minimum_required(VERSION 3.26)
project(Proyecto)

set(CMAKE_CXX_STANDARD 17)

add_executable(Clases Clases.cpp
        Comentarios.cpp)
add_executable(NEWS NEWS.cpp
        Comentarios.cpp)
add_executable(Autor Autor.cpp
        Comentarios.cpp)
add_executable(Persona Persona.cpp
        Comentarios.cpp)
add_executable(Usuario Usuario.cpp
        Comentarios.cpp)
add_executable(noticia Noticia.cpp
        Comentarios.cpp)
add_executable(Comentario Comentario.cpp
        Comentarios.cpp)
add_executable(Archivero Archivero.cpp
        Comentarios.cpp)
