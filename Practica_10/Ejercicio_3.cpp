//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/11/2025
//Numero de Ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante 
{
    string nombre;
    int edad;
    double promedio;
};

void registrarEstudiantes(string nombreArchivo);
void mostrarEstudiantes(string nombreArchivo);

int main() 
{
    system("chcp 65001");
    system("cls");
    string nombreArchivo="estudiantes.txt";
    
    registrarEstudiantes(nombreArchivo);
   
    mostrarEstudiantes(nombreArchivo);
    
    return 0;
}

void registrarEstudiantes(string nombreArchivo) 
{
    ofstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error al abrir el archivo"<<endl;
        return;
    }
    
    cout<<"REGISTRO DE ESTUDIANTES (deje el nombre vacío para terminar)"<<endl;
    
    int contador=0;
    string nombreTemp;
    
    do 
    {
        Estudiante estudiante;
        
        cout<<"\nEstudiante "<<(contador+1)<<":"<<endl;
        cout<<"Nombre: ";
        getline(cin, nombreTemp);
      
        if (!nombreTemp.empty()) 
        {
            estudiante.nombre=nombreTemp;
            
            cout<<"Edad: ";
            cin>>estudiante.edad;
            cin.ignore();
            
            cout<<"Promedio: ";
            cin>>estudiante.promedio;
            cin.ignore();
            
            archivo<<"Nombre: "<<estudiante.nombre<<endl;
            archivo<<"Edad: "<<estudiante.edad<<endl;
            archivo<<"Promedio: "<<estudiante.promedio<<endl;
            archivo<<endl;
            
            contador++;
        }
        
    } while (!nombreTemp.empty());
    
    archivo.close();
    cout << "\nRegistro completado. "<<contador<<" estudiantes guardados"<<endl;
}

void mostrarEstudiantes(string nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error al abrir el archivo o el archivo no existe"<<endl;
        return;
    }
    
    cout<<"\n------ ESTUDIANTES REGISTRADOS -------"<<endl;
    
    string linea;
    int contador=0;
    
    while (getline(archivo, linea)) 
    {
        if (!linea.empty()) 
        {
            cout<<linea<<endl;
        } 
        else 
        {
            contador++;
            if (!archivo.eof()) 
            {
                cout<<"------------------------"<<endl;
            }
        }
    }
    
    archivo.close();
    cout<<"\nTotal: "<<contador<<" estudiantes"<<endl;
}

