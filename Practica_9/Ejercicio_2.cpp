//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 15/11/2025
//Numero de Ejercicio: 2

#include<iostream>
#include<fstream>
using namespace std;

struct Atleta
{
    char nombre[50];
    char pais[50];
    int edad;
    int mejor_tiempo;
};

Atleta DatosAtleta();
void MostrarGanador(Atleta registro);

int main()
{
    system("chcp 65001");
    system("cls");

    int N;
    int indiceMejor=0;

    cout<<"¿Cuántos atletas desea registrar? ";
    cin>>N;
    
    Atleta atletas[N];
    
    for (int i=0; i<N; i++) 
    {
        cout<<"\n--- Atleta "<<(i+1)<<" ---"<<endl;
        atletas[i]=DatosAtleta();
    }
    
    for (int i=1; i<N; i++) 
    {
        if (atletas[i].mejor_tiempo<atletas[indiceMejor].mejor_tiempo) 
        {
            indiceMejor=i;
        }
    }
    MostrarGanador(atletas[indiceMejor]);

    return 0;
}

Atleta DatosAtleta()
{
    Atleta registro;
    cin.ignore();
    cout<<"Ingrese su nombre: ";
    cin.getline(registro.nombre,50);
    cout<<"Ingrese su pais: ";
    cin.getline(registro.pais,50);
    cout<<"Ingrese su edad: ";
    cin>>registro.edad;
    cout<<"Ingrese su tiempo: ";
    cin>>registro.mejor_tiempo;

    return registro;
}

void MostrarGanador(Atleta registro)
{
    cout<<"-----------------------------------"<<endl;
    cout<<"\tNombre: "<<registro.nombre<<endl;
    cout<<"\tPais: "<<registro.pais<<endl;
    cout<<"\tEdad: "<<registro.edad<<endl;
    cout<<"\tMejor Tiempo: "<<registro.mejor_tiempo<<endl;
    cout<<"-----------------------------------"<<endl;
}