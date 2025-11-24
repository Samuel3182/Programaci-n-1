//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 24/11/2025
//Numero de Ejercicio: 1

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct structEstudiante
{
    char CI[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas
{
    char CI[10];
    char materia[20];
    int nota;
};

const char* nombreArchivoEst="estudiantesR.bin";
const char* nombreArchivoNota="notas.bin";

structEstudiante IngresoDatosEstudiante();
void escribirArEst();
structNotas IngresoNotas();
void ingresarNotasAr();
void reporte();

int main()
{
    system("chcp 65001");
    system("cls");
    
    int opcion;
    do
    {
        cout<<"1. Ingreso de datos de estudiantes"<<endl;
        cout<<"2. Ingreso de materias o notas"<<endl;
        cout<<"3. Reporte de estudiantes y notas ingresadas"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            escribirArEst();
            break;
        case 2:
            ingresarNotasAr();
            break;
        case 3:
            reporte();
            break;
        default:
            cout<<"Saliendo....";
            break;
        }


    } while (opcion!=4);
    
    return 0;
}

structEstudiante IngresoDatosEstudiante()
{
    structEstudiante estudiante;
    cout<<"Ingrese la cedula de identidad del estudiante: ";
    cin.getline(estudiante.CI,10);
    cout<<"Ingrese su nombre: ";
    cin.getline(estudiante.nombres,30);
    cout<<"Ingrese su apellido: ";
    cin.getline(estudiante.apellidos,30);
    return estudiante;
}

void escribirArEst()
{
    structEstudiante es=IngresoDatosEstudiante();
    ofstream archivo(nombreArchivoEst, ios::binary | ios::app);
    if(!archivo.is_open())
    {
        cout << "Error al agregar"<<endl;
        return;
    }
    archivo.write((char*)&es, sizeof(structEstudiante));
    archivo.close();
    cout<<"Registro exitoso"<<endl;
}

structNotas IngresoNotas()
{
    structNotas notas;
    cout<<"Ingrese su cedula de identidad: ";
    cin.getline(notas.CI,10);
    cout<<"Ingrese su materia: ";
    cin.getline(notas.materia,20);
    cout<<"Ingrese su nota: ";
    cin>>notas.nota;
    return notas;
}

void ingresarNotasAr() 
{
    structNotas no=IngresoNotas();
    ofstream archivo(nombreArchivoNota, ios::binary | ios::app);
    if(!archivo.is_open())
    {
        cout<<"Error al agregar"<<endl;
        return;
    }
    archivo.write((char*)&no, sizeof(structNotas));
    archivo.close();
    cout<<"Registro exitoso"<<endl;
}

void reporte()
{
    ifstream ar1(nombreArchivoEst, ios::binary);
    
    structEstudiante es;
    structNotas no;
    while (ar1.read((char*)(&es), sizeof(structEstudiante)))
    {
        cout<<"\n---------------------------------"<<endl;
        cout<<"\tCI: "<<es.CI<<endl;
        cout<<"\tNombre: "<<es.nombres<<endl;
        cout<<"\tApellidos: "<<es.apellidos<<endl;
        ifstream ar2(nombreArchivoNota, ios::binary);
        while(ar2.read((char*)(&no), sizeof(structNotas)))
        {
            if(strcmp(es.CI, no.CI)==0)
            {
                cout<<"\t Materia: "<<no.materia<<endl;
                cout<<"\t Nota: "<<no.nota<<endl;
            }
        }
        ar2.close();
    }

    ar1.close();
}