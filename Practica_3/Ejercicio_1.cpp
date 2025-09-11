// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 09/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

bool esPar(int numero);
int main()
{
    system("cls");
    int numero;
    
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    
    if (esPar(numero)) 
    {
        cout<<"El numero "<<numero<<" es Par"<<endl;
    } 
    else 
    {
        cout<<"El numero "<<numero<<" es Impar"<<endl;
    }
    
    return 0;
}

bool esPar(int numero) 
{
    return (numero%2==0);
}