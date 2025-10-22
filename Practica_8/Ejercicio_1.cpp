//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 1

#include<iostream>
using namespace std;

int sumaDigitos (int x);

int main()
{
    int x;
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    
    int suma=sumaDigitos(x);
    
    cout<<"La suma de sus digitos es: "<<suma<<endl;

    return 0;
}

int sumaDigitos (int x) 
{
    if (x==0)
    {
        return 0;
    } 
    else 
    {
        return (x%10)+sumaDigitos(x/10);
    }
}

