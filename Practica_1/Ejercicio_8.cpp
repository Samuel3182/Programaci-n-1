// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 25/08/2025
// Número de ejercicio: 8

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Ingrese un numero: "<<endl;
    cin>>n;

    if(n%2==0)
    {
        cout<<"\nEl numero "<<n<<" es par"<<endl;

    }
    else
    {
        cout<<"\nEl numero "<<n<<" es impar"<<endl;
    }

    return 0;

}