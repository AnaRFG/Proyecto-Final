# Proyecto Final Programación II 🦢
## Sistema de Noticias 🕊️

# Indice
- [Proyecto Final Programación](#Proyecto-Final-Programación-II)
    - [Consigna](#consigna-)
        - [Consideraciones](#consideraciones)
        - [Desarrollo del Programa](#desarrollo-del-programa)
        - [Clases utilizadas](#clases-utilizadas)

| Clave UCC | Autores   💻      |
| --------- | --------------    |
| 2316635   | Araya, Mariano J. |
| 2304151   | Funes G., Ana R.  |
| 2321544   | Sanchez, Jazmín M.|

### Consigna: 
El sitio de noticias NEWS desea realizar un software para administrar los artículos que se
deben publicar. Cada artículo es creado por un autor, el cual debe estar registrado en el
sistema. La empresa desea que cada artículo pueda ser comentado por los lectores y para
ello es necesario que los usuarios lectores estén registrados.
Se pide realizar un programa que permita realizar las siguientes operaciones:
- Registro de Autores
- Registro de usuarios
- Carga de noticias a publicar por parte de un autor.
- Registro de comentarios sobre las noticias por parte de usuarios registrados.
- Realizar las siguiente consultas:
1. Listar noticias publicadas en el año
2. Listado de noticias publicadas el último mes.
3. Mostrar una noticia y sus comentarios asociados.
4. Artículos publicados por una determinado autor
### Consideraciones:
- El detalle de datos de cada noticia es el siguiente Noticias (Título, Detalle, dia, mes, año,
autor)
- Cada autor puede publicar varias noticias. Los datos de autor son los siguientes: DNI,
Nombre, Medio.
- Un usuario se registra con los siguientes datos: DNI, Nombre, Edad
- Cada comentario contiene la siguiente información: Número, Texto, usuario
- El programa debe guardar noticias, comentarios, autores y usuarios en archivos de texto.


# DESARROLLO DEL PROGRAMA:
## Clases utilizadas:
- Persona: Clase base, contiene nombre y DNI de la persona.
- Autor: Clase derivada de persona, contiene el medio de publicación del autor.
- Usuario: Clase derivada de persona, contiene la edad del usuario.
- Comentarios: 
- Noticias:
- NEWS: 
- Archivero: 



