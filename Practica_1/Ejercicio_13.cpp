// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 26/08/2025
// Número de ejercicio: 13

#include<iostream>
using namespace std;
int main()
{
    int N;
    int S=0;

    cout<<"Ingrese un numero: ";
    cin>>N;

    for (int i=1; i<=N; i++)
    {
        S=S+i;
        /* code */
    }
    
    cout<<"\nLa suma total de los numeros es: "<<S<<endl;

    return 0;
    
}