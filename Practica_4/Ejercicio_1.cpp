// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 16/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void intercambiar (int &a, int &b);

int main()
{
    system("cls");
    int a, b;
    cout<<"Ingrese el 1er valor: ";
    cin>>a;
    cout<<"Ingrese el 2do valor: ";
    cin>>b;

    cout<<"\nLa variable a es: "<<a<<endl;
    cout<<"La variable b es: "<<b<<endl;
    
    cout<<endl<<endl;
    
    intercambiar(a, b);
    
    cout<<"La variable a es: "<<a<<endl;
    cout<<"La variable b es: "<<b<<endl;

    return 0;
}

void intercambiar (int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}