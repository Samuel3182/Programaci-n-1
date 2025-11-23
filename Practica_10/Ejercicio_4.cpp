//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/11/2025
//Numero de Ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int buscarTextoEnArchivo(string nombreArchivo, string textoBuscar);
void mostrarResultadoBusqueda(int cantidad, string textoBuscar, string nombreArchivo);

int main() 
{
    system("chcp 65001");
    system("  cls");
    
    string nombreArchivo="datos.txt";
    string textoBuscar;
    
    cout<<"======== BUSCADOR DE TEXTO ========"<<endl;
    cout<<"Ingrese la palabra o frase a buscar: ";
    getline(cin, textoBuscar);
    
    int resultado=buscarTextoEnArchivo(nombreArchivo, textoBuscar);
    mostrarResultadoBusqueda(resultado, textoBuscar, nombreArchivo);
    
    cout<<"\nPresione Enter para salir...";
    cin.ignore();
    cin.get();
    
    return 0;
}

int buscarTextoEnArchivo(string nombreArchivo, string textoBuscar) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error: No se pudo abrir el archivo '"<<nombreArchivo<<"'"<<endl;
        return -1;
    }
    
    int contador=0;
    string linea;
  
    while (getline(archivo, linea)) 
    {
        size_t posicion=0;
        
        while ((posicion=linea.find(textoBuscar, posicion))!=string::npos) 
        {
            contador++;
            posicion+=textoBuscar.length();
        }
    }
    
    archivo.close();
    return contador;
}

void mostrarResultadoBusqueda(int cantidad, string textoBuscar, string nombreArchivo) 
{
    if (cantidad==-1) 
    {
        cout<<"No se pudo completar la búsqueda"<<endl;
    } 
    else if (cantidad==0) 
    {
        cout<<"El texto '"<<textoBuscar<< "' no se encontró en el archivo"<<endl;
    } 
    else 
    {
        cout<<"El texto '"<<textoBuscar<<"' aparece "<<cantidad<<" veces en el archivo"<<endl;
    }
}

