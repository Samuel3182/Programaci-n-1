//Defensa pratica 1
//Materia: programacion 1, paralelo 4
//Estudiante: Samuel Sebastian Zarate Zabala
//Fecha: 28/08/2025

#include<iostream>
using namespace std;
int main()
{
    int N;
    system("cls");

    cout<<"ingrese su nota: ";
    cin>>N;

    if (N>=51)
    {
        cout<<"\nUsted esta aprobado - ";

        if (N==100)
        {
            cout<<" Calificacion A+";
        }
        else if (N<=95 && N>90)
        {
            cout<<" Calificacion A";
        }
        else if (N<=90 && N>80)
        {
            cout<<" Calificacion B+";
        }
        else if (N<=80 && N>70)
        {
            cout<<" Calificacion - B";
        }
        else if (N<=70 && N>60)
        {
            cout<<" Calificacion C+";
        }
        else if (N<=60)
        {
            cout<<" Calificacion C";
        }
    }
    else
    {
        cout<<"\nUsted esta reprobado";
    }
    
    return 0;

}