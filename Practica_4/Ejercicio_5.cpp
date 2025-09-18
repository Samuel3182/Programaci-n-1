// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 18/09/2025
// Número de ejercicio: 5

#include<iostream>
using namespace std;

void SalarioMensual(double &s, int h);
void Bonificacion(double &s, int h);

int main()
{
    system("cls");
    int h;
    double s=2750.0; //sueldo minimo
    cout<<"Ingrese las horas de trabajo: ";
    cin>>h;

    if (h>8)
    {
        Bonificacion(s,h);
    }
    else
    {
        SalarioMensual(s,h);
    }
    return 0;
}
void SalarioMensual(double &s, int h)
{
    double b;
    b=s/(30*h);
    cout<<"Su salario es de: "<<b<<" bs"<<endl;
}
void Bonificacion(double &s, int h)
{
    double e,b;
    b=s/(30*h);
    e=b*2;

    cout<<"\nHoras extras registradas"<<endl;
    cout<<"Su bonificacion es de: "<<e<<" bs"<<endl;
}