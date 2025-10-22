//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 2

#include <iostream>
using namespace std;

double potencia(double a, int n);

int main() 
{
    system("cls");
    double base;
    int exponente;
    
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin>>exponente;
    
    double resultado=potencia(base, exponente);
    cout<<base<<" elevado a "<<exponente<<" = "<<resultado<<endl;
    
    return 0;
}

double potencia(double a, int n) 
{
    if (n==0) 
    {
        return 1;
    }
    
    else if (n<0) 
    {
        return 1.0/potencia(a, -n);
    }
    
    else 
    {
        return a*potencia(a, n-1);
    }
}