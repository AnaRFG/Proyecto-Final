#include <iostream>
#include "Clases.h"

using namespace std;

int main(){

/*
 * Ingrese 1 (Autor), 2 (Lector)
 *
 * para clase autor:
 * do{
 * ¿Desea guardar noticias?
 * if( rta=='si' || rta=='SI'){
 * ¿Cuántas noticias desea guardar?---> archivo .txt
 * }else{
 *
 *
 *
 *  }while
 *
 * para clase usuario:
 * cout<< ingrese la edad;
 * do{
 * Mostrar noticias (mostrarle los titulos del archivo que hizo el autor)--->usar linea del nombre de la struct, que elija con switch
 * ¿Quiere hacer un comentario?
 * cin>>rta; --string
 * if (rta=='si'  || rta == 'SI'){
 * Ingrese el comentario--->se guarda en un archivo .txt
 * }else{no
 * ¿Quiere leer otra noticia? 1 (SI), 2 (NO)
 *  }while (respuesta !=2)
 *}
 MENU PRINCIPAL:
 cout<< ingrese el nombre;
 cout<< ingrese el dni;
 do {

    cin >> opcion;
    switch (opcion) {
      case 1:
        accionLector();
        break;
      case 2:
        accionAutor();
        break;
      case 3:
        cout << "\nSaliendo del Sistema de Noticias...\n";
        break;
      default:
        cout << "\nOpción no válida. Intente nuevamente." << endl;
    }
  } while (opcion != 3);

  return 0;
 USUARIO
 AUTOR
 SALIR
---- do / while
 MENU USUARIO: bucle while anterior
 MENU AUTOR:

 *
 *
 *
 * // struct noticia{
 *      string titulo;
 *      string detalle;
 *      int dia;
 *      int mes;
 *      int anio;
 *      string autor;
 *      }
 *
 *  c[i].titulo  ---mostrar titulo
 *  c[i].autor ----mos autor
 *  c[i].dia; c[i]mes; c[i].anio;
 *
 *
 */



}