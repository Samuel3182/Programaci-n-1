//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 24/11/2025
//Numero de Ejercicio: 8

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void crearArchivoDocumento(string nombreArchivo);
void contarElementosArchivo(string nombreArchivo);
void menuPrincipal();

int main() 
{
    system("chcp 65001");
    system("cls");

    menuPrincipal();
    return 0;
}

void menuPrincipal() 
{
    string nombreArchivo="documento.txt";
    int opcion=0;
    
    do 
    {
        cout<<"1. Crear archivo documento"<<endl;
        cout<<"2. Contar lineas, palabras y caracteres"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        
        if (opcion==1)
        {
            crearArchivoDocumento(nombreArchivo);
        } 
        else if (opcion==2) 
        {
            contarElementosArchivo(nombreArchivo);
            system("pause");
        }
    } while (opcion!=0);
}

void crearArchivoDocumento(string nombreArchivo) 
{
    ofstream archivo(nombreArchivo);
    string linea;
    int cantidadLineas;
    
    if (archivo.fail()) 
    {
        cout<<"Error: No se pudo crear el archivo "<<nombreArchivo<<endl;
        return;
    }
    
    cout<<"\nIngrese la cantidad de lineas a escribir: ";
    cin>>cantidadLineas;
    
    cin.ignore();
    
    cout << "Escriba el contenido del archivo:"<<endl;
    for (int i=0; i<cantidadLineas; i++) 
    {
        cout<<"Linea "<<(i+1)<<": ";
        getline(cin, linea);
        archivo<<linea<<endl;
    }
    
    archivo.close();
    cout<<"\nArchivo "<<nombreArchivo<<" creado exitosamente"<<endl;
    system("pause");
}

void contarElementosArchivo(string nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    string linea;
    int totalLineas=0;
    int totalPalabras=0;
    int totalCaracteres=0;
    
    if (archivo.fail()) 
    {
        cout<<"Error: No se pudo abrir el archivo "<<nombreArchivo<<endl;
        return;
    }
    
    cout << "CONTEO DE ELEMENTOS DEL ARCHIVO"<<endl;
    cout << "--------------------------------"<<endl;
  
    while (getline(archivo, linea)) 
    {
        totalLineas++;
        totalCaracteres+=linea.length();
        
        int palabrasEnLinea=0;
        bool enPalabra=false;
        
        for (int i=0; i<linea.length(); i++) 
        {
            char caracter=linea[i];
            
            if (caracter==' ' || caracter=='\t') 
            {
                if (enPalabra) 
                {
                    palabrasEnLinea++;
                    enPalabra=false;
                }
            }
            else 
            {
                enPalabra=true;
            }
        }
    
        if (enPalabra) 
        {
            palabrasEnLinea++;
        }
        
        totalPalabras+=palabrasEnLinea;
    }
    
    archivo.close();
  
    cout<<"Archivo: "<<nombreArchivo<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Total de lineas: "<<totalLineas<<endl;
    cout<<"Total de palabras: "<<totalPalabras<<endl;
    cout<<"Total de caracteres: "<<totalCaracteres<<endl;
    cout<<endl;
}