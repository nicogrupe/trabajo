//
//  main.cpp
//  agenda
//
//  Created by martin dionisi on 5/4/16.
//  Copyright (c) 2016 martin dionisi. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

struct Contacto{
    char nombre[100];
    char numero[100];
};

struct Contacto contactos[3];

void agregarContactos()
{
    for(int i=0;i<3;i++)
    {
        cout << "Nombre nº" << i+1 << endl;
        cin >> contactos[i].nombre;
        cout << "Telefono nº" << i+1<< endl;
        cin >> contactos[i].numero;
    }
}

bool porNombre()
{
    char n[100];
    cout << "Ingrese nombre: ";
    cin >> n;
    for(int i=0;i<3;i++)
    {
        if(!strcmp(n,contactos[i].nombre)){
            cout << "El numero correspondiente es: " << contactos[i].numero << endl;
            return true;
        }
    }
    cout << "no hay resultados" << endl;
    return false;
}

bool porNumero()
{
    char n[100];
    cout << "Ingrese telefono: ";
    cin >> n;
    for(int i=0;i<3;i++)
    {
        if(!strcmp(n,contactos[i].numero)){
            cout << "El nombre correspondiente es: " << contactos[i].nombre << endl;
            return true;
        }
    }
    cout << "no hay resultados" << endl;
    return false;
    
}

int main(int argc, const char * argv[]) {
    
    bool running = true;
    int menu;
    
    agregarContactos();
    
    while(running)
    {
        cout << "1)Bucar por nombre" << endl << "2)Buscar por telefono" << endl;
        cin >> menu;
        switch(menu){
            case 1:
                porNombre();
                break;
            case 2:
                porNumero();
                break;
        }
    }
    return 0;
    
}
