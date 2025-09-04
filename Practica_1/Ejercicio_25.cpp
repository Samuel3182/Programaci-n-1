// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 25

#include<iostream>
using namespace std;
int main()
{
    system("cls");
    char respuesta;
    do
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
        }

        cout<<"\nDesea calcular otra tabla? (s/n): ";
        cin>>respuesta;

    } 
    while (respuesta=='s');

    return 0;
    
}