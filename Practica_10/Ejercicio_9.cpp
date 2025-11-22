//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 13/11/2025
//Numero de Ejercicio: 9

#include <iostream>
#include <fstream>
using namespace std;

void escribirMensaje();
void mensajeCifrado();

int main()
{
    escribirMensaje();
    mensajeCifrado();
    return 0;
}

void escribirMensaje()
{
    ofstream archivo("mensaje.txt", ios::app);
    char linea[100];
    cout<<"Ingrese su mensaje"<<endl;
    cin.getline(linea, 100);
    if(!archivo.is_open())
    {
        cout<<"Error"<<endl;
        return;
    }
    
    archivo<<linea<<"\n";
    archivo.close();
}

void mensajeCifrado()
{
    ifstream archivoNormal("mensaje.txt");
    ofstream archivoCifrado("mensaje_cifrado.txt");
    
    if(!archivoNormal.is_open())
    {
        cout<<"Error"<<endl;
        return;
    }
    
    if(!archivoCifrado.is_open())
    {
        cout<<"Error tambien"<<endl;
        return;
    }
    string linea;
    while(!archivoNormal.eof())
    {
        getline(archivoNormal, linea);
        string cifrado = "";
        for(int i=0; i<linea.length(); i++)
        {
            char nuevaLetra=linea[i] + 3;
            cifrado+=nuevaLetra;
        }
        archivoCifrado<<cifrado<<"\n";
    }
    
    archivoNormal.close();
    archivoCifrado.close();
}