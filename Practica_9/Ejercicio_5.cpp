//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 15/11/2025
//Numero de Ejercicio: 5

#include<iostream>
#include<string.h>
using namespace std;

struct Pelicula
{
    char titulo[50];
    char director[50];
    int duracion;
    int año_estreno;
    char genero[50];
};

void DatosPelicula(Pelicula &peli);
void mostrarPelicula(Pelicula peli);
void mostrarPorGenero(Pelicula pelis[], int N, char generoBuscar[]);
void mostrarPorDirector(Pelicula pelis[], int N, char directorBuscar[]);

int main()
{
    system("chcp 65001");
    system("cls");

    int N;
    char buscar[50];
    cout<<"ingrese la cantidad de peliculas: ";
    cin>>N;
    cin.ignore();

    Pelicula peliculas[N];
    
    for (int i=0; i<N; i++) 
    {
        cout<<"\n------- Película "<<(i+1)<<" -------"<<endl;
        DatosPelicula(peliculas[i]);
    }

    cout<<"\n-------- BÚSQUEDA POR GÉNERO -------"<<endl;
    cout<<"Ingrese el género a buscar: ";
    cin.getline(buscar,50);
    mostrarPorGenero(peliculas,N,buscar);

    cout<<"\n------- BÚSQUEDA POR DIRECTOR --------"<<endl;
    cout<<"Ingrese el director a buscar: ";
    cin.getline(buscar,50);
    mostrarPorDirector(peliculas,N,buscar);

    return 0;
}

void DatosPelicula(Pelicula &peli)
{
    cout<<"Ingrese el titulo de la pelicula: ";
    cin.getline(peli.titulo,50);
    cout<<"Ingrese el nombre del director: ";
    cin.getline(peli.director,50);
    cout<<"Ingrese la duracion: ";
    cin>>peli.duracion;
    cout<<"Ingrese el año de estreno: ";
    cin>>peli.año_estreno;
    cout<<"Ingrese el genero de la pelicula: ";
    cin.ignore();
    cin.getline(peli.genero,50);
}
void mostrarPelicula(Pelicula peli) 
{
    cout<<"\tTítulo: "<<peli.titulo<<endl;
    cout<<"\tDirector: "<<peli.director<<endl;
    cout<<"\tDuración: "<<peli.duracion<<" minutos"<<endl;
    cout<<"\tAño de estreno: "<<peli.año_estreno<<endl;
    cout<<"\tGénero: "<<peli.genero<<endl;
    cout<<"--------------------------------"<<endl;
}
void mostrarPorGenero(Pelicula pelis[], int N, char generoBuscar[]) 
{
    bool encontrado=false;
    
    for (int i=0; i<N; i++) 
    {
        if (strcmp(pelis[i].genero, generoBuscar)==0) 
        {
            mostrarPelicula(pelis[i]);
            encontrado=true;
        }
    }
    
    if (!encontrado) 
    {
        cout<<"No se encontraron películas del género '"<<generoBuscar<<"'" <<endl;
    }
}
void mostrarPorDirector(Pelicula pelis[], int N, char directorBuscar[]) 
{
    bool encontrado=false;
    
    for (int i=0; i<N; i++) 
    {
        if (strcmp(pelis[i].director, directorBuscar)==0) 
        {
            mostrarPelicula(pelis[i]);
            encontrado=true;
        }
    }
    
    if (!encontrado) 
    {
        cout<<"No se encontraron películas del director '"<<directorBuscar<<"'"<<endl;
    }
}