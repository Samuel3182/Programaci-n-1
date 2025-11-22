//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/11/2025
//Numero de Ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int contarPalabrasEnArchivo(string nombreArchivo);
void mostrarResultado(int cantidadPalabras, string nombreArchivo);

int main() 
{
    system("chcp 65001");
    system("cls");
    string nombreArchivo="texto.txt";
    
    cout<<"-------- CONTADOR DE PALABRAS --------"<<endl;
    cout<<"Leyendo archivo: "<<nombreArchivo<<endl;
    int totalPalabras=contarPalabrasEnArchivo(nombreArchivo);
    mostrarResultado(totalPalabras, nombreArchivo);
    
    return 0;
}

int contarPalabrasEnArchivo(string nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error: No se pudo abrir el archivo '"<<nombreArchivo<<"'"<<endl;
        return -1;
    }
    
    int contadorPalabras=0;
    string palabra;
    
    while (archivo>>palabra) 
    {
        contadorPalabras++;
    }
    
    archivo.close();
    return contadorPalabras;
}

void mostrarResultado(int cantidadPalabras, string nombreArchivo) 
{
    if (cantidadPalabras==-1) 
    {
        cout<<"No se pudo completar el conteo de palabras."<<endl;
    } 
    else if (cantidadPalabras==0) 
    {
        cout<<"El archivo '"<<nombreArchivo<<"' está vacio"<<endl;
    } 
    else 
    {
        cout<<"El archivo '"<<nombreArchivo<<"' contiene "<<cantidadPalabras<<" palabras"<<endl;
    }
}