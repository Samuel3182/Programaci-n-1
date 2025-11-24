//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 24/11/2025
//Numero de Ejercicio: 4

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Estudiante 
{
    char ci[15];
    char nombre[50];
    char apellidos[50];
    char materia[100];
    int paralelo;
    double nota;
};

const char* nombreArchivo="estudiantes.bin";

Estudiante ingresar ();
void AgregarEstudiante ();
void mostrarEstudiantesHabilitados();
void eliminarEstudiante();
void adicionarNotas ();
void menu ();

int main()
{
    system("chcp 65001");
    system("cls");
    
    menu();

    return 0;
}

Estudiante ingresar ()
{
    Estudiante es;
    cout<<"Ingrese su CI"<<endl;
    cin.ignore();
    cin.getline(es.ci, 15);
    cout<<"Ingrese su nombre"<<endl;
    cin.getline(es.nombre, 50);
    cout<<"Ingrese sus apellidos"<<endl;
    cin.getline(es.apellidos, 50);
    cout<<"Ingrese la materia: "<<endl;
    cin.getline(es.materia, 100);
    cout<<"Ingrese su paralelo: "<<endl;
    cin>>es.paralelo;
    cin.ignore();
    es.nota=0.0;
    return es;
}

void AgregarEstudiante ()
{
    Estudiante es=ingresar();
    ofstream archivo(nombreArchivo, ios::binary | ios::app);
    if(!archivo.is_open())
    {
        cout<<"Error al agregar"<<endl;
        return;
    }
    archivo.write((char*)&es, sizeof(Estudiante));
    archivo.close();
    cout<<"Registro exitoso"<<endl;
}

void mostrarEstudiantesHabilitados()
{
    ifstream archivo(nombreArchivo);
    if(!archivo.is_open())
    {
        cout<<"Error en mostrar"<<endl;
        return;
    }
    Estudiante es;
    while (archivo.read((char*)(&es), sizeof(Estudiante)))
    {
        if(es.nota>=60.0)
        {
            cout<<"\t================\n";
            cout<<"\tCI: "<<es.ci<<endl;
            cout<<"\tNombre: "<<es.nombre<<endl;
            cout<<"\tApellidos: "<<es.apellidos<<endl;
            cout<<"\tMateria: "<<es.materia<<endl;
            cout<<"\tParalelo: "<<es.paralelo<<endl;
            cout<<"\tNota: "<<es.nota<<endl;
            cout<<"\t================\n";
        }
    }
    archivo.close();
}

void eliminarEstudiante()
{
    ifstream archivo(nombreArchivo);
    if(!archivo.is_open())
    {
        cout<<"Error en modificar"<<endl;
        return;
    }
    Estudiante es;
    vector<Estudiante> estudiantes;
    while (archivo.read((char*)(&es), sizeof(Estudiante)))
    {
        estudiantes.push_back(es);
    }
    archivo.close();
    
    for(int i=0; i<estudiantes.size(); i++)
    {
        cout<<"Estudiante numero "<<i+1<<endl;
        cout<<"CI: "<<estudiantes[i].ci<<endl;
        cout<<"Nombre: "<<estudiantes[i].nombre<<endl;
        cout<<"Apellidos: "<<estudiantes[i].apellidos<<endl;
    }
    
    cout<<"Ingrese el numero de estudiante a eliminar: "<<endl;
    int eliminar;
    cin>>eliminar;
    
    ofstream archivoEscritura(nombreArchivo, ios::binary);
    if(!archivoEscritura.is_open())
    {
        cout<<"Error al sobreescribir"<<endl;
        return;
    }
    
    for(int i=0; i<estudiantes.size(); i++)
    {
        if(i!=eliminar-1)
        {
            archivoEscritura.write((char*)&estudiantes[i], sizeof(Estudiante));
        }
    }
    cout << "Eliminado exitosamente"<<endl;
    estudiantes.clear();
    archivoEscritura.close();
}

void adicionarNotas ()
{
    ifstream archivo(nombreArchivo);
    if(!archivo.is_open())
    {
        cout<<"Error en modificar"<<endl;
        return;
    }
    Estudiante es;
    int indice=1;
    
    while (archivo.read((char*)(&es), sizeof(Estudiante)))
    {
        cout<<"Estudiante numero: "<<indice<<endl;
        cout<<"CI: "<<es.ci<<endl;
        cout<<"Nombre: "<<es.nombre<<endl;
        cout<<"Apellidos: "<<es.apellidos<<endl;
        indice++;
    }
    cout<<"Ingrese el numero de estudiante quiere registrar su nota: "<<endl;
    int registrar;
    cin>>registrar;
    archivo.close();
    
    ifstream archivo1(nombreArchivo);
    int indice1=1;
    Estudiante nuevo;
    while (archivo1.read((char*)(&es), sizeof(Estudiante)))
    {
        if(indice1==registrar)
        {
            nuevo=es;
        }
        indice1++;
    }
    
    archivo1.close();
    
    cout<<"Ingrese su nueva nota: "<<endl;
    cin>>nuevo.nota;
    
    ofstream archivoActualizar(nombreArchivo, ios::binary | ios::in);
    
    long offset=(registrar-1)*sizeof(Estudiante);
    archivoActualizar.seekp(offset);
    archivoActualizar.write((char*)&nuevo, sizeof(Estudiante));
    archivoActualizar.close();
}

void menu () 
{
    int opcion=0;
    bool bandera=true;
    while(bandera)
    {
        cout<<"1. Adicionar estudiante\n";
        cout<<"2. Listado de estudiantes habilitados\n";
        cout<<"3. Eliminar un estudiante\n";
        cout<<"4. Adicionar notas habilitacion\n";
        cout<<"5. Salir\n";
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                AgregarEstudiante();
                break;
            case 2:
                mostrarEstudiantesHabilitados();
                break;
            case 3:
                eliminarEstudiante();
                break;
            case 4:
                adicionarNotas();
                break;
            case 5:
                bandera=false;
                break;
            default:
                cout<<"Opcion no valida\n";
                break;
        }
    }
    
}