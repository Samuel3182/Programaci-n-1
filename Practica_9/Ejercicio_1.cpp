//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 13/11/2025
//Numero de Ejercicio: 1

#include<iostream>
#include<fstream>
using namespace std;

struct Libro
{
    char titulo [50];
    char autor [50];
    int año_publicacion;
    bool disponible;
};

Libro DatosLibro();
void MostrarDatos(Libro registro);

int main()
{
    system("chcp 65001");
    system("cls");

    Libro libro=DatosLibro();
    MostrarDatos(libro); 

    return 0;

}

Libro DatosLibro()
{
    char opcion;
    Libro registro;

    cout<<"Ingrese el titulo del libro: ";
    cin.getline(registro.titulo,50);
    cout<<"Ingrese el autor del libro: ";
    cin.getline(registro.autor,50);
    cout<<"ingrese el año de publicacion: ";
    cin>>registro.año_publicacion;
    cout<<"el producto esta disponible? (s/n): ";
    cin>>registro.disponible; 

    registro.disponible=(opcion=='s' || opcion=='S');
    
    return registro;
    
}

void MostrarDatos(Libro registro)
{
    cout<<"---------------------------------"<<endl;
    cout<<"\tTitulo del libro: "<<registro.titulo<<endl;
    cout<<"\tAutor del libro: "<<registro.autor<<endl;
    cout<<"\tAño de publicacion: "<<registro.año_publicacion<<endl;
    cout<<"\tDisponibilidad: ";
    if (registro.disponible) 
    {
        cout<<"Disponible"<<endl;
    } 
    else 
    {
        cout<<"NO Disponible"<<endl;
    }
    cout<<"----------------------------------"<<endl;
}