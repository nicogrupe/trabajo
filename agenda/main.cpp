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

char nombres[3][100];
char numeros[3][100];

void agregarContactos()
{
    for(int i=0;i<3;i++)
    {
        cout << "Nombre nº" << i+1 << endl;
        cin >> nombres[i];
        cout << "Telefono nº" << i+1<< endl;
        cin >> numeros[i];
    }
}

bool porNombre()
{
    char n[100];
    cout << "Ingrese nombre: ";
    cin >> n;
    for(int i=0;i<3;i++)
    {
        if(!strcmp(n,nombres[i])){
            cout << "El numero correspondiente es: " << numeros[i] << endl;
            return 1;
        }
    }
    cout << "no hay resultados" << endl;
    return 2;
}

bool porNumero()
{
    char n[100];
    cout << "Ingrese telefono: ";
    cin >> n;
    for(int i=0;i<3;i++)
    {
        if(!strcmp(n,numeros[i])){
            cout << "El nombre correspondiente es: " << nombres[i] << endl;
            return 1;
        }
    }
    cout << "no hay resultados" << endl;
    return 2;
    
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
