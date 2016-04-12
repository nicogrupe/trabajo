#include <iostream>

using namespace std;

struct palabras{
    
    char *nombres[5];
};

void Ordenar(char*s[])
{
    char *aux;
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            if( strcmp(s[j],s[j+1]) > 0){
                aux = s[j+1];
                s[j+1] = s[j];
                s[j] = aux;
            }
        
        }
    }
}

int main()
{
    
    palabras lista;
    
    for(int i=0;i < 5;i++){
        cout << "ingrese nombre nº" << i+1 << endl;
        lista.nombres[i] = new char[0];
        cin >> lista.nombres[i];
    }
    
    Ordenar(lista.nombres);
    
    cout << "nombres ordenados: " << endl;
    
    for(int i = 0;i<5;i++){
        for(int j =0;j<strlen(lista.nombres[i]);j++){
            cout << lista.nombres[i][j];
        }
        cout << endl;
    }
    
    
    return 0;
}