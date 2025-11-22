//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/11/2025
//Numero de Ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void escribirNombresEnArchivo(string nombreArchivo);
void leerNombresDesdeArchivo(string nombreArchivo);

int main() 
{
    system("chcp 65001");
    system("cls");
    
    string NOMBRE_ARCHIVO="nombres.txt";
    
    escribirNombresEnArchivo(NOMBRE_ARCHIVO);
    
    leerNombresDesdeArchivo(NOMBRE_ARCHIVO);
    
    return 0;
}

void escribirNombresEnArchivo(string nombreArchivo) 
{
    ofstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error: No se pudo abrir el archivo para escritura"<<endl;
        return;
    }
    
    cout<<"=== ESCRITURA DE NOMBRES ==="<<endl;
    cout<<"Ingrese nombres (escriba 'fin' para terminar): "<<endl;
    
    string nombre;
    int contador=0;
    
    while (true) 
    {
        cout<<"Nombre "<<(contador+1)<<": ";
        getline(cin, nombre);
        
        if (nombre=="fin") 
        {
            archivo.close();
            cout<<"\nSe guardaron "<<contador<<" nombres en el archivo"<< endl;
            return;
        }
        
        archivo << nombre << endl;
        contador++;
    }
}

void leerNombresDesdeArchivo(string nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error: No se pudo abrir el archivo para lectura"<<endl;
        return;
    }
    
    cout<<"\n=== LECTURA DE NOMBRES ==="<<endl;
    cout<<"Nombres guardados en el archivo:"<<endl;
    
    string nombre;
    int contador=0;
    
    while (getline(archivo, nombre)) 
    {
        if (!nombre.empty()) 
        {
            cout<<(contador+1)<<". "<<nombre<<endl;
            contador++;
        }
    }
    
    archivo.close();
    
    if (contador==0)
    {
        cout<<"El archivo está vacío"<<endl;
    } 
    else 
    {
        cout<<"Total: "<<contador<<" nombres leídos"<<endl;
    }
}

