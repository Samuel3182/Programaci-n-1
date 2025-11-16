//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 15/11/2025
//Numero de Ejercicio: 4

#include<iostream>
#include<fstream>
using namespace std;

struct Empleado
{
    char nombre[50];
    char genero[50];
    float salario;
};

Empleado DatosEmpleados();
void MostrarResultados(Empleado Emp);

int main()
{
    system("chcp 65001");
    system("cls");
    int N;
    cout<<"Ingrese la cantidad de empleados a registrar: ";
    cin>>N;

    Empleado empleados[N];
    for (int i=0; i<N; i++)
    {
        cout<<"------- Empleado "<<(i+1)<<" ----------"<<endl;
        empleados[i]=DatosEmpleados();
    }
    int mayor=0;
    int menor=0;

    for (int i=0; i<N; i++)
    {
        if (empleados[i].salario>empleados[mayor].salario)
        {
            mayor=i;
        }
        else if (empleados[i].salario<empleados[menor].salario)
        {
            menor=i;
        }
    }
    cout << "\n------- EMPLEADO CON MAYOR SALARIO -------" << endl;
    MostrarResultados(empleados[mayor]);
    
    cout << "\n------- EMPLEADO CON MENOR SALARIO -------" << endl;
    MostrarResultados(empleados[menor]);

    return 0;
}

Empleado DatosEmpleados()
{
    Empleado Emp;
    cout<<"ingrese su nombre: ";
    cin.ignore();
    cin.getline(Emp.nombre,50);
    cout<<"ingrese su genero: ";
    cin.getline(Emp.genero,50);
    cout<<"ingrese su salario: ";
    cin>>Emp.salario;
    
    return Emp;
}
void MostrarResultados(Empleado Emp)
{
    cout<<"\tNombre"<<Emp.nombre<<endl;
    cout<<"\tGenero: "<<Emp.genero<<endl;
    cout<<"\tSalario: "<<Emp.salario<<endl;
}