//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 15/11/2025
//Numero de Ejercicio: 3

#include<iostream>
#include<fstream>
using namespace std;

struct Alumnos
{
    int cedula;
    char nombre[50];
    char apellido[50];
    int edad;
    char profesion[50];
    char lugar_nacimiento[50];
    char direccion[50];
    int telefono;
};

Alumnos DatosAlumnos();
void MostrarDatos(Alumnos datos);

int main()
{
    system("chcp 65001");
    system("cls");

    int N;
    cout<<"Ingrese la cantidad de estudiantes a registrar: ";
    cin>>N;

    Alumnos alumno[N];
    for (int i=0; i<N; i++)
    {
        cout<<"------ Alumno "<<(i+1)<<" -----"<<endl;
        alumno[i]=DatosAlumnos();
    }

    for (int i=0; i<N; i++)
    {
        cout<<"\n-------DATOS DEL ALUMNO "<<(i+1)<<" -------"<<endl;
        MostrarDatos(alumno[i]);
    }

    return 0;
}

Alumnos DatosAlumnos()
{
    Alumnos datos;
    cout<<"Ingrese su cedula de identidad: ";
    cin>>datos.cedula;
    cout<<"Ingrese su nombre: ";
    cin.ignore();
    cin.getline(datos.nombre,50);
    cout<<"Ingrese su apellido: ";
    cin.getline(datos.apellido,50);
    cout<<"Ingrese su profesion: ";
    cin.getline(datos.profesion,50);
    cout<<"Ingrese su edad: ";
    cin>>datos.edad;
    cout<<"Ingrese su lugar de nacimiento: ";
    cin.ignore();
    cin.getline(datos.lugar_nacimiento,50);
    cout<<"Ingrese su direccion: ";
    cin.getline(datos.direccion,50);
    cout<<"Ingrese su telefono: ";
    cin>>datos.telefono;

    return datos;
}

void MostrarDatos(Alumnos datos)
{
    cout<<"\tNombre: "<<datos.nombre<<endl;
    cout<<"\tApellido: "<<datos.apellido<<endl;
    cout<<"\tC.I. : "<<datos.cedula<<endl;
    cout<<"\tProfesion: "<<datos.profesion<<endl;
    cout<<"\tEdad: "<<datos.edad<<endl;
    cout<<"\tLugar de nacimiento: "<<datos.lugar_nacimiento<<endl;
    cout<<"\tDireccion: "<<datos.direccion<<endl;
    cout<<"\tNumero Telefonico: "<<datos.telefono<<endl;
}