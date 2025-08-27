// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 26/08/2025
// Número de ejercicio: 19

#include<iostream>
using namespace std;
int main()
{
    int N;
    int r;
    cout<<"Ingrese un numero: ";
    cin>>N;

    cout<<"\nTabla de multiplicar de: "<<N<<endl;

    for (int i=1; i<=10; i++)
    {
        r=N*i;
        cout<<N<<" x "<<i<<" = "<<r<<endl;
        /* code */
    }
    return 0;
    
}