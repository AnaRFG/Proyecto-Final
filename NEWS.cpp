#include <iostream>
//#include "Persona.h"
//#include "autor.h"
using namespace std;

int main(){

    int ingreso;
    do{
        cout<<"\n\nUsted ha ingresado al sistema de noticias NEWS\n\n";
        cout<<"Por favor, elija su modo de acceso ingresando el número correspondiente:\n\n";
        cout<<"1. Autor\n\n";
        cout<<"2. Usuario - Lector\n\n";
        cout<<"3. Deseo salir del programa. \n\n";
        cin>>ingreso;
        switch (ingreso) {
            case 1:
            cout<<"hola";
            //realizar metodos de autor

            break;
            case 2:
            cout<<"chau";
            //realizar metodos de usuario
            break;
            case 3:
            exit(-1);
        }
        if(ingreso!=1 || ingreso != 2){
            cout<<"\nLa opcion ingresada no es valida. Intente nuevamente.\n\n";
        }
    } while (ingreso!=1 || ingreso != 2);

    return 0;
}