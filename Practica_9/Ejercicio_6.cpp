//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 16/11/2025
//Numero de Ejercicio: 6

#include<iostream>
#include<fstream>
using namespace std;

struct Empleado
{
    char nombre[50];
    int ID;
    float sueldo;
    int antiguedad;
};

void DatosEmpleados(Empleado &Emp);
void MostrarDatos(Empleado Emp);
int SueldosMayores(Empleado empleados[], int N, float sueldoReferencia);
float PromedioAntiguedad(Empleado empleados[], int N);

int main()
{
    system("chcp 65001");
    system("cls");

    int N;
    float sueldoBuscar;
    cout<<"Ingrese la cantidad de empleados: ";
    cin>>N;
    cin.ignore();

    Empleado empleados[N];
    for (int i=0; i<N; i++)
    {
        cout<<"\n------- Empleado "<<(i+1)<<" ---------"<<endl;
        DatosEmpleados(empleados[i]);
    }
    
    for (int i=0; i<N; i++) 
    {
        cout<<"\nEmpleado "<<(i+1)<<":"<<endl;
        MostrarDatos(empleados[i]);
    }
    
    cout<<"\nIngrese el sueldo de referencia: ";
    cin>>sueldoBuscar;
    
    int cantidad=SueldosMayores(empleados, N, sueldoBuscar);
    cout<<"Empleados con sueldo mayor a $"<<sueldoBuscar<<": "<<cantidad<<endl;
    
    float promedio=PromedioAntiguedad(empleados, N);
    cout<<"\nEl promedio de antigüedad es: "<<promedio<<" años"<<endl;

    return 0;
}

void DatosEmpleados(Empleado &Emp)
{
    cout<<"Ingrese su nombre: ";
    cin.getline(Emp.nombre,50);
    cout<<"Ingrese su ID: ";
    cin>>Emp.ID;
    cout<<"Ingrese su sueldo: ";
    cin>>Emp.sueldo;
    cout<<"Ingrese sus años de antiguedad: ";
    cin>>Emp.antiguedad;
    cin.ignore();
}

void MostrarDatos(Empleado Emp)
{
    cout<<"\tNombre: "<<Emp.nombre<<endl;
    cout<<"\tID: "<<Emp.ID<<endl;
    cout<<"\tSueldo: "<<Emp.sueldo<<endl;
    cout<<"\tAntiguedad: "<<Emp.antiguedad<<endl;
}

int SueldosMayores(Empleado empleados[], int N, float sueldoReferencia) 
{
    int contador=0;
    for (int i=0; i<N; i++) 
    {
        if (empleados[i].sueldo>sueldoReferencia) 
        {
            contador++;
        }
    }
    return contador;
}

float PromedioAntiguedad(Empleado empleados[], int N) 
{
    if (N==0) return 0;
    
    int suma=0;

    for (int i=0; i<N; i++) 
    {
        suma+=empleados[i].antiguedad;
    }
    
    return (float)suma/N;
}