#include <iostream>
#include "Persona.h"
#include "autor.h"
using namespace std;

int main(){

    int ingreso;
    cout<<"Usted ha ingresado al sistema de noticias NEWS"<<endl;
    cout<<"¿Como desea ingresar? Ingrese un numero segun su eleccion"<<endl;
    cout<<"Autor (1)"<<endl;
    cout<<"Usuario - Lector (2)"<<endl;
    cout<<"Deseo salir del programa (3)"<<endl;
    cin>>ingreso;
    switch (ingreso) {
        case 1:
            //realizar metodos de autor
            break;
        case 2:
            //realizar metodos de usuario
            break;
        case 3:
            exit(-1);
    }


    return 0;
}