// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 16

#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int numero;
    bool P=true;
    
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    
    if (numero<=1) 
    {
        P=false;
    } 
    else if (numero==2) 
    {
        P=true;
    } 
    else if (numero%2==0) 
    {
        P=false;
    } 
    else 
    {
        for (int i=3; i*i<=numero; i+=2)
        {
            if (numero%i==0) 
            {
                P=false;
            }
        }
    }
    
    if (P) 
    {
        cout<<numero<<" es un numero primo"<<endl;
    } 
    else 
    {
        cout<<numero<<" No es numero primo"<<endl;
    }
    
    return 0;

}