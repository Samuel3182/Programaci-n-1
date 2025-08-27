// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 26/08/2025
// Número de ejercicio: 14

#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Ingrese un numero: ";
    cin>>N;

    for (int i=1; i<=N; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
    
}