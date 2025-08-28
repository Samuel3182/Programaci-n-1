// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/08/2025
// Número de ejercicio: 15

#include<iostream>
using namespace std;
int main()
{
    int n;
    float nota, suma=0, promedio;

    cout<<"Ingrese la cantidad de notas: ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cout<<"\nIngresar nota: ";
        cin>>nota;

        suma=suma+nota;
    }
    promedio=suma/n;
    cout<<"\nPromedio general de las "<<n<<" notas es: "<<promedio;

    return 0;

}